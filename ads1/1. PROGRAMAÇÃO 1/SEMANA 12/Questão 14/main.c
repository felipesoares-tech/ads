#include <stdio.h>
#include <stdlib.h>
////////////////////////////////QUESTÃO-14////////////////////////////////////////////
int main()
{
    int mat[3][5];
    int i,j;

    for(i=0; i<=2; i++){
        for(j=0; j<=4; j++){
            printf("LINHA %d, COLUNA %d -> ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
printf("\n");
    for(i=0; i<=2; i++){
        for(j=0; j<=4; j++){
            printf("LINHA %d, COLUNA %d -> %d\n",i,j,mat[i][j]*2);
        }
    }

    return 0;
}
