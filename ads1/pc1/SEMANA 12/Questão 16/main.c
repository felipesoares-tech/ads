#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUEST�O-16////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");
    int mat[40][40];
    int x,i,j,k,cond;

    k=0;

    printf("INFORME O TAMANHO DA MATRIZ (NO M�XIMO 40) --> ");
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
        printf("A MATRIZ INFORMADA � SIM�TRICA!!");
    else
        printf("A MATRIZ INFORMADA N�O � SIM�TRICA!!");

    return 0;
}
