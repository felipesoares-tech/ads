#include <stdio.h>
#include <stdlib.h>
////////////////////////////////QUESTÃO-12////////////////////////////////////////////
int main()
{

    int mat[5][3];
    int mat2[3][5];
    int i,j;

    for(i=0; i<=4; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("LINHA %d, COLUNA %d -> ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }


    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
            mat[i][j] = mat[j][i];

    }
    printf("\nMATRIZ TRANSPOSTA !!\n\n");

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=4; j++)
            printf("LINHA %d, COLUNA %d -> %d\n",i,j,mat[i][j]);
    }

    return 0;
}
