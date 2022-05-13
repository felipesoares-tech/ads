#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

FILE *arquivo;
int col, lin, max;
char tipo[3];

int is_p2(char *filename[]) // FUNÇÃO RESPONSÁVEL POR IDENTIFICAR O TIPO DE ARQUIVO, P2 OU P5
{
    FILE *f = fopen(filename[1], "r");
    char type[3];

    fgets(type, 3, f);

    if (strcmp(type, "P2") == 0) // SE O TIPO DO MEU ARQUIVO FOR P2 IRÁ RETURNAR 1
        return 1;
    else if (strcmp(type, "P5") == 0) // CASO SEJA P5, IRÁ RETORNAR 0
        return 0;
    else // CASO NÃO SEJA NENHUM DOS DOIS, ENTÃO O TIPO DE ARQUIVO NÃO É VÁLIDO
    {
        printf("Arquivo inválido!");
        exit(1);
    }
}

void read_p2(char *filename[]) // FUNÇÃO RESPONSÁVEL POR LER ARQUIVOS DO TIPO P2
{

    arquivo = fopen(filename[1], "r"); // LENDO O ARQUIVO PASSADO COMO ARGUMENTO.
    if (arquivo == NULL)
    {
        perror("error:");
        exit(1);
    }

    fgets(tipo, 3, arquivo);              // LENDO O TIPO DE PGM
    fscanf(arquivo, "%d %d", &col, &lin); // LENDO RESPECTIVAMENTE O NUMERO DE COLUNAS E LINHAS
    fscanf(arquivo, "%d", &max);          // LENDO SUA INTENSIDADE MÁXIMA

    printf("O arquivo inserido é do tipo: %s\n", tipo);
}

void read_p5(char *filename[]) // FUNÇÃO RESPONSÁEL POR LER ARQUIVOS DO TIPO P5
{

    arquivo = fopen(filename[1], "rb");
    if (!arquivo)
    {
        perror("error:");
        exit(1);
    }

    fgets(tipo, 3, arquivo);              // LENDO O TIPO DE PGM
    fscanf(arquivo, "%d %d", &col, &lin); // LENDO RESPECTIVAMENTE O NUMERO DE COLUNAS E LINHAS
    fscanf(arquivo, "%d", &max);          // LENDO SUA INTENSIDADE MÁXIMA

    printf("O arquivo inserido é do tipo: %s\n", tipo);
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
    fprintf(arquivo, "\n%d %d\n", col, lin);
    fprintf(arquivo, "%d\n", max);

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            fprintf(arquivo, "%d ", matriz[i][j]);

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
    fprintf(arquivo, "\n%d %d\n", col, lin);
    fprintf(arquivo, "%d\n", max);

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

    if (is_p2(argv)) // CASO VERDADEIRO, O ALGORITMO IRÁ REALIZAR A ROTINA PADRÃO DE UM ARQUIVO DO TIPO P2
    {
        read_p2(argv); //LENDO O ARQUIVO
        int mat[lin][col];

        set_limiar(mat);    // DEFININDO LIMIAR
        fclose(arquivo);    // FECHANDO O ARQUIVO
        save_as(mat, argv); // SALVANDO UM NOVO ARQUIVO

        return 0;
    }
    else // CASO CONTRÁRIO IRÁ REALIZAR A ROTINA PARA O TIPO DE ARQUIVO P5
    {
        read_p5(argv);
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