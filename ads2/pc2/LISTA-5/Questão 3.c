#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///3. Crie um programa que contenha um vetor de inteiros contendo 5 elementos.
///Utilizando apenas aritmética de ponteiros, leia esse vetor do teclado e imprima
///o dobro de cada valor lido.


int main ()
{
    setlocale(LC_ALL,"");

    int vet[5],*pvet=vet,i=0;

    for(i=0; i<5; i++,pvet++)
    {
        printf("INFORME O %dº VALOR: ",i+1);
        scanf("%d",pvet);
    }

    pvet-=5;
    printf("\n");

    for(i=0; i<5; i++,pvet++)
        printf("DOBRO DO %dº VALOR = %d\n",i+1,*pvet*=2);


    return 0;
}
