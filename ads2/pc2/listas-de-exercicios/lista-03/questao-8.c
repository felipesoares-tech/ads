#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///8. Fa�a um algoritmo que carregue um vetor com 15 posi��es, calcule e mostre o
///maior elemento do vetor e em que posi��o esse elemento se encontra e o menor
///elemento do vetor e em que posi��o esse elemento se encontra.

int main()
{

    setlocale(LC_ALL,"");

    int vet[15],maior,menor,i,x=0,y=0;

    for(i=0; i<15; i++)
    {
        printf("INFORME O %d� ELEMENTO: ",i+1);
        scanf("%d",&vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for(i=0; i<15; i++)
    {

        if(vet[i]>maior)
        {
            maior=vet[i];
            x=i;
        }

        else if(vet[i]<menor)
        {
            menor=vet[i];
            y=i;
        }
    }

    printf("\nO MAIOR � %d POSI��O %d, O MENOR � %d POSI��O %d\n",maior,x,menor,y);

    return 0;
}
