#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-17////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int x,y,i,j,cx,cy;
    float mat[40][40];
    float soma2=0;

    printf("INFORME A QUANTIDADE DE LINHAS (NO MÁXIMO 40) -> ");
    scanf("%d",&x);
    printf("INFORME A QUANTIDADE DE COLUNAS (NO MÁXIMO 40) -> ");
    scanf("%d",&y);

    cx = x-1;
    cy= y-1;
    printf("\n");
    for(i=0; i<=cx; i++)
    {
        for(j=0; j<=cy; j++)
        {
            printf("LINHA %d ,COLUNA %d --> ",i,j);
            scanf("%f",&mat[i][j]);
            soma2 = soma2 + mat[i][j];
        }
    }

    float soma=0,media;

    media = soma2*1.00/(x*y);

    printf("\n");
    for(j=0; j<=cy; j++)
    {
        for(i=0; i<=cx; i++)
        {
            soma = soma + mat[i][j];
            if(i == cx){
                printf("SOMA DA COLUNA %d = %.2f\n",j,soma);
                soma=0;
            }

        }
    }
    printf("\nVALORES QUE SÃO MENORES QUE A MÉDIA DA MATRIZ!!\n");
    printf("MEDIA = %.2f\n\n",media);
    for(i=0; i<=cx; i++)
    {
        for(j=0; j<=cy; j++)
        {
            if(mat[i][j]<media)
                printf("%.2f\n",mat[i][j]);
        }
    }
soma=0;
    printf("\nSOMA DA DIAGONAL SECUNDÁRIA\n");

    for(i=0,j=cy; j>=0; i++,j--){
        soma = soma + mat[i][j];
    }
    printf("\nRESULTADO = %.2f\n",soma);


    return 0;
}
