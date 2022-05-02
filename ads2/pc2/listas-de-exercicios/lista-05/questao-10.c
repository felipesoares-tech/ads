#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

///10.Faça um programa que carregue uma matriz 5x5 (números aleatórios inteiros)
///e crie dois vetores de cinco posições cada um, que contenham,
///respectivamente, as somas das linhas e das colunas da matriz. Escreva a matriz
///e os vetores criados.

int main ()
{

    int i,j;
    int mat[5][5],vet1[5]={0,0,0,0,0},vet2[5]={0,0,0,0,0};

    srand(time(NULL));

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            mat[i][j] = rand()%100;
            vet1[i]+=mat[i][j];
            printf("%.2d ",mat[i][j]);
        }
        printf("\n");
    }

    for(j=0; j<5; j++)
        for(i=0; i<5; i++)
            vet2[j]+=mat[i][j];


    printf("\nSOMA DAS LINHAS\n\n");
    for(i=0; i<5; i++)
        printf("LINHA %d = %d\n",i+1,vet1[i]);

    printf("\nSOMA DAS COLUNAS\n\n");
    for(i=0; i<5; i++)
        printf("COLUNA %d = %d\n",i+1,vet2[i]);

    return 0;
}
