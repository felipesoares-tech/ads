#include <stdio.h>
#include <stdlib.h>
////////////////////////////////QUESTÃO-15////////////////////////////////////////////
int main()
{
    int mat[4][4];
    int mat2[4][4];
    int i,j,k;

    for(i=0; i<=3; i++){
        for(j=0; j<=3; j++){
            printf("LINHA %d, COLUNA %d -> ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0,k=3; i<=3; i++,k--){
        for(j=0; j<=3; j++)
           mat2[i][j] = mat[j][k];
    }
    printf("\n\n");
    for(i=0; i<=3; i++){
        for(j=0; j<=3; j++)
            printf("LINHA %d, COLUNA %d -> %d\n",i,j,mat2[i][j]);
    }


    return 0;
}
