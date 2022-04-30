#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-13////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int mat_a[4][4];
    int i,j,x=0,cont;

    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("LINHA %d,COLUNA %d -> ",i,j);
            scanf("%d",&mat_a[i][j]);
        }
    }
    printf("\n");
    for(i=0,j=3; i<=3&&j>=0; i++,j--)
    {
        for(cont=1; cont<=mat_a[i][j]; cont++)
        {
            if(mat_a[i][j]%cont == 0)
                x++;

            if(x>=3)
            {
                x=0;
                break;
            }
        }
        if(x == 2)
        {
            printf("O ELEMENTO QUE SE ENCONTRA NA LINHA %d COLUNA %d É PRIMO!\n",i,j);
            x=0;
        }
    }

    return 0;
}
