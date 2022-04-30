#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

///9. Gerar e imprimir uma matriz de tamanho 10x10, onde seus elementos são da
///forma:
///A[i][j] = 2 * i + 7 * j + 2 se i < j;
///A[i][j] = 3 * i² + 1 se i = j;
///A[i][j] = 4 * i³ + 5 * j² + 1 se i > j.

int main()
{
    int i,j;
    int mat[10][10];

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(i<j)
                mat[i][j]=2*i+7*j+2;
            else if(i==j)
                mat[i][j]=3*pow(i,2)+1;
            else
                mat[i][j]=(4*pow(i,3)+5)*pow(j,2)+1;

            printf("%.6d ",mat[i][j]);
        }
        printf("\n");
    }



    return 0;
}
