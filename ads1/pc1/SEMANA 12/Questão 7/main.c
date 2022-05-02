#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUESTÃO-07////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int vet[6];
    int i,x,y,z,j;

    x =0;

    for(i=0; i<=5; i++)
    {
        printf("INFORME O VALOR DO ÍNDICE %d --> ",i);
        scanf("%d",&vet[i]);
    }

    printf("\nNÚMEROS PARES:\n\n");

    for(i=0; i<=5; i++)
    {
        if(vet[i]%3 == 0)
            j++;

        if(vet[i]%2 == 0)
            printf("%d\n",vet[i]);
        else
            x++;

    }
    printf("\nNÚMEROS PRIMOS:\n\n");
    for(i=0; i<=5; i++)
    {
        for(y=1,z=0; y<=vet[i]; y++)
        {
            if(vet[i]%y == 0)
                z++;
        }
        if(z == 2)
            printf("%d\n",vet[i]);

    }
    printf("\nTOTAL DE NÚMEROS DIVISÍVEIS POR 3 -> %d",j);
    printf("\nTOTAL DE NÚMEROS ÍMPARES -> %d\n",x);


    return 0;
}
