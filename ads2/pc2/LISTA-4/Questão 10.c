#include <stdio.h>
#include <stdlib.h>

///10.Escreva um programa para trocar dois valores usando uma função e ponteiros.

void troca(int *a, int *b)
{
    int x;

    x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    int a,b;
    int* p1 = &a;
    int* p2 = &b;

    printf("INFORME O VALOR 1: ");
    scanf("%d",&a);

    printf("INFORME O VALOR 2: ");
    scanf("%d",&b);

    troca(p1,p2);

    printf("VL1 = %d\n",a);
    printf("VL2 = %d",b);

    return 0;
}
