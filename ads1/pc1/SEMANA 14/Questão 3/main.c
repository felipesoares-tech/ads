#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 15
////////////////////////////////QUESTÃO-03////////////////////////////////////////////
typedef struct
{
    char nome[50],tel[30];
    float prec;

} loja;

int main()
{
    setlocale(LC_ALL,"");

    loja x[5];
    int i;
    float med=0,medf;

    for(i=0; i<TAM; i++)
    {
        fflush(stdin);
        printf("\nLOJA Nº[%d]\n\n",i+1);

        printf("NOME >> ");
        gets(x[i].nome);

        printf("TELEFONE >> ");
        fflush(stdin);
        gets(x[i].tel);

        printf("PREÇO >> R$");
        scanf("%f",&x[i].prec);

        med=med+x[i].prec;
    }
    medf = med/15;
    printf("\nVALOR MÉDIO = R$%.2f\n\n",medf);

    printf("LOJAS COM PREÇO ABAIXO DA MÉDIA!\n\n");

    for(i=0; i<TAM; i++)
    {
        if(x[i].prec<medf)
        {
            printf("NOME = %s\n",x[i].nome);
            printf("TELEFONE >> %s\n\n",x[i].tel);

        }
    }
    return 0;
}
