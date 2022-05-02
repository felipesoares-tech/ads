#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUESTÃO-05////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float vet_a[10];
    float vet_b[10];
    int i;

    for(i=0; i<=9; i++)
    {
        printf("VALOR ÍNDICE %d --> ",i);
        scanf("%f",&vet_a[i]);
    }

    for(i=0; i<=9; i++)
    {
        if(i%2 == 0)
            vet_b[i] = vet_a[i]/2;
        else
            vet_b[i] = vet_a[i]*3;

        printf("\nVETOR B --> %.2f",vet_b[i]);
    }

    return 0;
}
