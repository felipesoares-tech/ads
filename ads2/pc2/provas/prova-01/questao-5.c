#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 10

typedef struct
{
    char nome[50],matricula[12],telefone[15],email[50];

} registros;

int main ()
{
    setlocale(LC_ALL,"");

    FILE *arqv;

    registros dados[TAM];

    arqv = fopen("02187354644.csv","w+");

    if(!arqv)
        printf("ERRO AO CRIAR O ARQUIVO!!");

    for(int i=0; i<TAM; i++)
    {
        printf("INFORME O NOME: ");
        gets(dados[i].nome);

        setbuf(stdin,NULL);

        printf("INFORME O MATRICULA: ");
        gets(dados[i].matricula);

        setbuf(stdin,NULL);

        printf("INFORME O TELEFONE: ");
        gets(dados[i].telefone);

        setbuf(stdin,NULL);

        printf("INFORME O E-MAIL: ");
        gets(dados[i].email);

    }

    for(int i=0; i<TAM; i++)
        if((fprintf(arqv,"%s;%s;%s;%s\n",dados[i].nome,dados[i].matricula,dados[i].telefone,dados[i].email))!=1)
            if(feof(arqv))
                printf("ERRO AO ESCREVER NO ARQUIVO!!");

    fclose(arqv);

    return 0;
}
