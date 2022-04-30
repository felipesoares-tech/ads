#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-4/////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float mat[4][7];
    int i,j,k,l;

    for(i=0; i<=3; i++)
    {
        for(j=0; j<=6; j++)
        {
            printf("LINHA %d ,COLUNA %d --> ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }

    int cont=0;

    for(i=0; i<=3; i++)
    {
        for(j=0; j<=6; j++)
        {
            for(k=0; k<=3; k++)
            {
                for(l=0; l<=6; l++)
                {
                    if(mat[i][j]<= mat[k][l])
                        cont++;

                    if(cont == 28)
                    {
                        cont=0;

                        for(k=0; k<=6; k++)
                        {
                            for(l=0; l<=6; l++)
                            {

                                if(mat[i][k]>= mat[i][l])
                                    cont++;

                                if(cont == 7)
                                {
                                    printf("\nO MINMAX É = %.2f , LINHA %d, COLUNA %d",mat[i][k],i,k);
                                    cont=0;
                                }

                            }
                            if (cont < 7)
                                    cont=0;
                        }
                    }
                    else if(cont < 28 && k == 3 && l == 6)
                        cont=0;
                }
            }
        }
    }

    return 0;
}
