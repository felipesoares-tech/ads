#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUEST�O-06////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int vet_a[50];
    int vet_b[50];
    int vet_c[50];
    int i;

    for(i=0; i<=49; i++){
        printf("VALOR VETOR >A< �NDICE >%d< --> ",i);
        scanf("%d",&vet_a[i]);
    }
    printf("\n");
    for(i=0; i<=49; i++){
        printf("VALOR VETOR >B< �NDICE >%d< --> ",i);
        scanf("%d",&vet_b[i]);
    }
    for(i=0; i<=49; i++){
        vet_c[i] = vet_a[i] + vet_b[i];
        printf("\nRESULTADO VETOR >C< �NDICE >%d< = %d",i,vet_c[i]);
    }

    return 0;
}
