#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///3. Declare um vetor de 10 posi��es e o preencha com os 10 primeiros n�meros
///�mpares e o escreva.

int main()
{

    int vet[10];

    for(int i=0,j=1; i<10; i++,j+=2)
        vet[i] = j;

    for(int i=0; i<10; i++)
        printf("%d\n",vet[i]);

    return 0;
}
