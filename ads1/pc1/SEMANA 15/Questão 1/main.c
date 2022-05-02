#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 600
//////////////////////////////////////QUESTÃO-1///////////////////////////////////////////
typedef struct
{
    char nome[50],tip[5];
    int mes,dia,ano,idade;

} cadastro;

int main()
{
    setlocale(LC_ALL,"");

    cadastro x[600];
    int i,y=0;

    for(i=0; i<TAM; i++)
    {
        printf("\n>>DOADOR %d<<\n\n",i+1);

        printf("NOME -> ");
        fflush(stdin);
        gets(x[i].nome);

        printf("DATA DE NASCIMENTO (xx/xx/xxxx)-> ");
        scanf("%d/%d/%d",&x[i].dia,&x[i].mes,&x[i].ano);

        printf("TIPO SANGUÍNEO E O  FATOR RH -> ");
        fflush(stdin);
        gets(x[i].tip);

        x[i].idade = 2021 - x[i].ano;

    }
    printf("\n\nNOME DAS PESSOAS COM IDADE ENTRE 18 E 55 ANOS COM TIPO SANGUÍNEO B+\n\n");
    for(i=0; i<TAM; i++)
    {
        if(strcmp(x[i].tip,"B+")==0 || strcmp(x[i].tip,"b+") == 0)
            {
            if(x[i].idade >=18 && x[i].idade <=55)
            printf("%s\n",x[i].nome);
            y++;

            }
    }

    if(y == 0)
        printf("\n\nNÃO CONSTA NENHUM DOADOR DE SANGUE COM TIPO SANGUÍNEO B+");

    return 0;
}
