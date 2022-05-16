#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

FILE *arquivo;
short int col, lin, max;
char tipo[3];

void ignore_comments()
{
    char c = fgetc(arquivo);

    while (c != '#')
        c = fgetc(arquivo);

    if (c == '#')
    {
        while (c != '\n')
        {
            printf("%c", c);
            c = fgetc(arquivo);
        }
    }
    else
    {
        fseek(arquivo, -1, SEEK_CUR);
        return;
    }
    printf("\n");
}

void read_file(char *filename[]) // FUNÇÃO RESPONSÁVEL POR LER ARQUIVOS DO TIPO P2
{
    arquivo = fopen(filename[1], "r");

    if (arquivo == NULL)
    {
        perror("error");
        exit(1);
    }

    fgets(tipo, 3, arquivo);

    if ((strcmp(tipo, "P2")) != 0)
        if ((strcmp(tipo, "P5")) != 0)
        {
            printf("Arquivo inválido!");
            exit(1);
        }

    fscanf(arquivo, "%hd %hd", &col, &lin); // LENDO RESPECTIVAMENTE O NUMERO DE COLUNAS E LINHAS
    fscanf(arquivo, "%hd", &max);           // LENDO SUA INTENSIDADE MÁXIMA
}

void set_limiar(int matriz[][col]) // FUNÇÃO PARA DEFINIÇÃO DE LIMIAR.
{
    float limiar;
    char op;

    printf("Definir Limiar[s/n]: ");
    op = getchar();
    op = toupper(op);

    while (op != 'S' && op != 'N')
    {
        system("clear");
        printf("Opção inválida!\n");
        printf("Definir Limiar[s/n]: ");
        op = getchar();
        op = toupper(op);
    }

    if (op == 'S')
    {
        printf("Limiar[0-100%%]: ");
        scanf("%f", &limiar);

        limiar = (limiar / 100) * max;
    }
    else
        limiar = 0.5 * max;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fscanf(arquivo, "%d", &matriz[i][j]);

            if (matriz[i][j] >= limiar)
                matriz[i][j] = max;
            else
                matriz[i][j] = 0;
        }
    }
    setbuf(stdin, NULL);
}

void save_p2(int matriz[][col], char *filename[]) // FUNÇÃO RESPONSÁVEL POR SALVAR NO FORMATO P2
{
    arquivo = fopen(filename[2], "w");

    if (arquivo == NULL)
    {
        perror("error:");
        exit(1);
    }
    if (strcmp(tipo, "P2") != 0)
        strcpy(tipo, "P2");

    fputs(tipo, arquivo);
    fprintf(arquivo, "\n%hd %hd\n", col, lin);
    fprintf(arquivo, "%hd\n", max);

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            fprintf(arquivo, "%hd ", matriz[i][j]);

    printf("Os dados foram salvos com sucesso!!");
    fclose(arquivo);
}
void save_p5(int matriz[][col], char *filename[]) // FUNÇÃO RESPONSÁVEL POR SALVAR NO FORMATO P5
{

    arquivo = fopen(filename[2], "wb");

    char mat[lin][col];

    if (arquivo == NULL)
    {
        perror("error:");
        exit(1);
    }
    if (strcmp(tipo, "P5") != 0)
        strcpy(tipo, "P5");

    fputs(tipo, arquivo);
    fprintf(arquivo, "\n%hd %hd\n", col, lin);
    fprintf(arquivo, "%hd\n", max);

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            mat[i][j] = matriz[i][j];

    if (!fwrite(mat, lin * col, 1, arquivo))
    {
        printf("Erro ao salvar o arquivo!");
        exit(1);
    }
    else
        printf("Os dados foram salvos com sucesso!!");

    fclose(arquivo);
}

void mtr_copy_ch_int(int matriz1[][col], unsigned char matriz2[][col]) // FUNÇÃO RESPONSÁVEL POR PASSAR OS DADOS DA MATRIZ DE CHAR PARA INTEIRO.
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            matriz1[i][j] = matriz2[i][j];
}

void save_as(int mat[][col], char *filename[])
{
    unsigned char op;

    printf("Salvar como:\n[1] - P2\n[2] - P5\n\nEscolha: ");
    op = getchar();

    while (op != '1' && op != '2')
    {
        system("clear");
        printf("Opção inválida!\n");
        printf("Salvar como:\n[1] - P2\n[2] - P5\n\nEscolha: ");
        op = getchar();
    }

    switch (op)
    {
    case '1':
        save_p2(mat, filename);
        break;
    case '2':
        save_p5(mat, filename);
        break;
    default:
        break;
    }
}

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("Erro, quantidade de argumentos inválidas!");
        return -1;
    }
    read_file(argv);

    if ((strcmp(tipo,"P2"))==0) // CASO VERDADEIRO, O ALGORITMO IRÁ REALIZAR A ROTINA PADRÃO DE UM ARQUIVO DO TIPO P2
    {
        printf("TIPO DE ARQUIVO: %s\n", tipo);
        int mat[lin][col];

        set_limiar(mat);    // DEFININDO LIMIAR
        fclose(arquivo);    // FECHANDO O ARQUIVO
        save_as(mat, argv); // SALVANDO UM NOVO ARQUIVO

        return 0;
    }
    else // CASO CONTRÁRIO IRÁ REALIZAR A ROTINA PARA O TIPO DE ARQUIVO P5
    {
        printf("TIPO DE ARQUIVO: %s\n", tipo);
        unsigned char mat[lin][col]; // MATRIZ CRIADA PARA LEITURA DE UM ARQUIVO DO TIPO P5
        int mat_int[lin][col];

        for (int i = 0; i < lin; i++) // PASSANDO TODOS OS BYTES DA IMAGEM PARA A MATRIZ
            for (int j = 0; j < col; j++)
                fread(mat, sizeof(mat), 1, arquivo);

        mtr_copy_ch_int(mat_int, mat); // COPIANDO A MATRIZ GERADA PARA DENTRO DE UMA MATRIZ DE VALORES INTEIROS
        set_limiar(mat_int);           // DEFININDO LIMIAR
        fclose(arquivo);               // FECHANDO ARQUIVO
        save_as(mat_int, argv);        // SALVANDO UM NOVO ARQUIVO

        return 0;
    }
    printf("O arquivo inserido é inválido!");
    return -1;
}