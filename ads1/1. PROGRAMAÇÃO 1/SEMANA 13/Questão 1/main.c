#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUESTÃO-1/////////////////////////////
int main()
{
    setlocale(LC_ALL,"");
    float mat[100][3];
    float x;
    int i;

    x = 0;

    for(i=0; i<=99; i++)
    {

        printf("NÚMERO DA MERCADORIA -> ");
        scanf("%f",&mat[i][0]);

        printf("INFORME O VALOR DE VENDA -> ");
        scanf("%f",&mat[i][1]);

        printf("INFORME A QUANTIDADE -> ");
        scanf("%f",&mat[i][2]);

        x = x + (mat[i][1] * mat[i][2]);
    }

    printf("\nFATURAMENTO TOTAL -> %.2f\n",x);


    return 0;
}
