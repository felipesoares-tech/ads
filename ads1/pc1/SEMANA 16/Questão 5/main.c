#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////////////QUESTÃO-5/////////////////////////////////
/*5- Crie um programa contendo uma função que receba uma matriz A (6x6) e retorne o menor elemento
de sua diagonal principal.*/

int menor(int a[6][6])
{
    int x,i,j,k,l,cont=0;

    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
        {
            if(i == j)
            {
                for(k=0,l=0; k<=5; k++,l++)
                {
                    if(a[i][j]<=a[k][l])
                        cont++;
                }
                if(cont == 6)
                    x = a[i][j];
                else
                    cont=0;
            }
        }
    }
    return x;
}

int main()
{
    setlocale(LC_ALL,"");

    int i,j;
    int mat[6][6];

    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
        {
            printf("LINHA [%d], COLUNA [%d] = ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\nMENOR ELEMENTO = %d",menor(mat));

    return 0;
}
