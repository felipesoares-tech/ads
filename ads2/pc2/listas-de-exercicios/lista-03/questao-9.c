#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20

///9. Ler um vetor com 20 n�meros inteiros e apresentar o resultado da multiplica��o
///dos valores pelos seus �ndices.

int main()
{

    setlocale(LC_ALL,"");

    int vet[TAM],i;

    for(i=0; i<TAM; i++)
    {
        printf("INFORME O %d� N�MERO: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++)
    {
        printf("%d x %d = %d\n",vet[i],i,(vet[i]*i));
    }



    return 0;
}
