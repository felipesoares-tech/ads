#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-03////////////////////////////////////////////
int main()

{
    setlocale(LC_ALL,"");

    int vet_a[30];
    int i,y,z=0;

    for(i=0; i<=29; i++)
    {
        printf("DIGITE O ÍNDICE %d -> ",i);
        scanf("%d",&vet_a[i]);
    }

    for(i=0,y=0; i<=29; i++)
    {

        if (vet_a[y]>= vet_a[i]){
            z++;

            if(z == 29)
                printf("\nO MAIOR É --> %d, POSIÇÃO --> %d",vet_a[y],y);

        }else
        {
            z=0;
            y++;
            i=0;
        }
    }

    return 0;
}
