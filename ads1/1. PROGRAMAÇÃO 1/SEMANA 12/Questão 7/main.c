#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUEST�O-07////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int vet[6];
    int i,x,y,z,j;

    x =0;

    for(i=0; i<=5; i++)
    {
        printf("INFORME O VALOR DO �NDICE %d --> ",i);
        scanf("%d",&vet[i]);
    }

    printf("\nN�MEROS PARES:\n\n");

    for(i=0; i<=5; i++)
    {
        if(vet[i]%3 == 0)
            j++;

        if(vet[i]%2 == 0)
            printf("%d\n",vet[i]);
        else
            x++;

    }
    printf("\nN�MEROS PRIMOS:\n\n");
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
    printf("\nTOTAL DE N�MEROS DIVIS�VEIS POR 3 -> %d",j);
    printf("\nTOTAL DE N�MEROS �MPARES -> %d\n",x);


    return 0;
}
