#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-3/////////////////////////////
int main()
{
    setlocale(LC_ALL,"");
    int mat[3][3];
    int i,j,k;

    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            printf("LINHA %d ,COLUNA %d --> ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    int cont=0,aux=0;

    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            for(k=0; k<=2; k++)
            {
                if(mat[j][i]<=mat[j][k] && mat[j][i]>=mat[k][i])
                    cont++;




            }

            if(cont==3)
            {
                printf("\nO PONTO DE CELA É O %d , E ESTÁ NA LINHA %d, COLUNA %d",mat[j][i],j,i);
                cont=0;
                aux++;
            }
            else if (cont<3)
                cont=0;






        }

    }

    if(aux!=1)
        printf("\nA MATRIZ INFORMADA NÃO POSSUI PONTO DE CELA!!");

    return 0;
}
