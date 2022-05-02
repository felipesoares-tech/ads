#include <stdio.h>
#include <stdlib.h>
////////////////////////////////QUESTÃO-18////////////////////////////////////////////
int main()
{
    int mat[6][4];
    int i,j,k;

    for(i=0; i<=5; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("LINHA %d,COLUNA %d >> ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    int cont=0,res;
    printf("\nMATRIZ RESULTANTE !\n\n");
    for(k=0; k<=5; k++)
    {
        for(i=0; i<=3; i++)
        {
            for(j=0; j<=3; j++)
            {
                if(mat[k][i]>= mat[k][j])
                    cont++;

                if(j == 3 && cont == 4)
                {
                    for(j=0; j<=3; j++)
                    {
                        res = mat[k][i] * mat[k][j];
                        printf("LINHA %d,COLUNA %d = %d\n",k,j,res);
                    }
                    cont=0;
                }
                else if (j == 3 && cont <4)
                    cont=0;
            }
        }
    }

    return 0;
}
