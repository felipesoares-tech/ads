#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-16////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");
    int mat[40][40];
    int x,i,j,k,cond;

    k=0;

    printf("INFORME O TAMANHO DA MATRIZ (NO MÁXIMO 40) --> ");
    scanf("%d",&x);
    printf("\n\n");

    cond=x-1;
    for(i=0; i<=cond; i++)
    {
        for(j=0; j<=cond; j++)
        {
            printf("LINHA %d, COLUNA %d -> ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0; i<=cond; i++)
    {
        for(j=0; j<=cond; j++)
        {
            if(mat[i][j] == mat[j][i])
                k++;
        }
    }
    if(k == x*x)
        printf("A MATRIZ INFORMADA É SIMÉTRICA!!");
    else
        printf("A MATRIZ INFORMADA NÃO É SIMÉTRICA!!");

    return 0;
}
