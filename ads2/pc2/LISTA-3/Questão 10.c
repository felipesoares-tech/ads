#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///10. Gerar 100 n�meros aleat�rios e armazen�-los em um vetor. Exibir o vetor.

int main()
{

    setlocale(LC_ALL,"");

    int vet[100];

    for(int i=0; i<100; i++)
    {
        vet[i] = rand();
        printf("%d\n",vet[i]);
    }

    return 0;
}
