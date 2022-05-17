/**
 * @file FiltroDeLimiar.c
 * @authors Felipe Soares, Elisabete Xavier e Fábio Feliciano
 * @brief Trabalho desenvolvido como componente avaliativo da disciplina de ADS com o tema Manipulação De Imagens
 * @date 2022-05-17
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

FILE *arquivo;
unsigned short int col, lin, max;
char tipo[3];

void ignore_comments() // Função para ignorar comentários
{
    char c;
    fseek(arquivo, 1, SEEK_CUR);

    do
    {
        c = fgetc(arquivo);

        switch (c)
        {
        case '#':
            while (c != '\n')
            {
                printf("%c", c);
                c = fgetc(arquivo);
            }
            break;
        case ' ':
            while (c != ' ')
                c = fgetc(arquivo);
            break;
        default:
            fseek(arquivo, -1, SEEK_CUR);
            return;
        }
    } while (c != '\n');

    printf("\n");
}

void read_file(char *filename[]) // Função para ler o arquivo, sendo P2 ou P5
{
    arquivo = fopen(filename[1], "r");

    if (!arquivo)
    {
        perror("error");
        exit(1);
    }

    fgets(tipo, 3, arquivo);
    ignore_comments();

    if ((strcmp(tipo, "P2")))
        if ((strcmp(tipo, "P5")))
        {
            printf("Arquivo inválido!");
            exit(1);
        }

    fscanf(arquivo, "%hd %hd", &col, &lin);
    fscanf(arquivo, "%hd", &max);
}

void set_limiar(int matriz[][col]) // Função para definir o limiar
{
    float limiar;
    unsigned char op;

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
}

void save_p2(int matriz[][col], char *filename[]) // Função para salvar como tipo P2
{
    arquivo = fopen(filename[2], "w");

    if (!arquivo)
    {
        perror("error:");
        exit(1);
    }
    if (strcmp(tipo, "P2"))
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
void save_p5(int matriz[][col], char *filename[]) // Função para salvar como tipo P5
{

    arquivo = fopen(filename[2], "wb");

    char mat[lin][col];

    if (!arquivo)
    {
        perror("error");
        exit(1);
    }
    if (strcmp(tipo, "P5"))
        strcpy(tipo, "P5");

    fputs(tipo, arquivo);
    fprintf(arquivo, "\n%hd %hd\n", col, lin);
    fprintf(arquivo, "%hd\n", max);

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            mat[i][j] = matriz[i][j];

    if (!fwrite(mat, (lin * col), 1, arquivo))
    {
        printf("Erro ao salvar o arquivo!");
        exit(1);
    }
    else
        printf("Os dados foram salvos com sucesso!!");

    fclose(arquivo);
}

void mtr_copy_ch_int(int matriz1[][col], unsigned char matriz2[][col]) // Função para copiar uma matriz de caracteres para uma matriz inteira
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            matriz1[i][j] = matriz2[i][j];
}

void save_as(int mat[][col], char *filename[]) // Função para escolher o tipo de arquivo a ser salvo.
{
    unsigned char op;
    setbuf(stdin, NULL);
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
    /*Argumentos necessários para o funcionamento do programa:
    1º Executável do código fonte
    2º Arquivo analisado
    3º Caminho e nome de onde o arquivo gerado será salvo
    */

    if (argc != 3) // Caso não seja inseridos 3 argumentos o programa não continuará
    {
        printf("Erro, quantidade de argumentos inválidas!");
        return -1;
    }

    read_file(argv); // Chamando a função que realiza a leitura do arquivo, e passando os argumentos

    if (!(strcmp(tipo, "P2")))
    {
        printf("TIPO DE ARQUIVO: %s\n", tipo);
        int mat[lin][col];

        set_limiar(mat); // Chamando a função que define o limiar do arquivo
        fclose(arquivo);
        save_as(mat, argv); // Chamando a função que irá definir como irei salvar o arquivo

        return 0;
    }
    else
    {
        printf("TIPO DE ARQUIVO: %s\n", tipo);
        unsigned char mat_ch[lin][col];
        int mat_int[lin][col];

        fread(mat_ch, sizeof(mat_ch), 1, arquivo);

        mtr_copy_ch_int(mat_int, mat_ch); // Chamando a função que irá copiar a matriz de caracteres para a matriz de inteiros
        set_limiar(mat_int);
        fclose(arquivo);
        save_as(mat_int, argv);

        return 0;
    }
    printf("O arquivo inserido é inválido!");
    return -1;
}