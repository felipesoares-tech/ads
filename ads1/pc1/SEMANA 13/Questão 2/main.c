#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-2/////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int vet_a[5];
    int vet_b[5];
    int vet_u[10]= {0,0,0,0,0,0,0,0,0,0};
    int i,j,k,x=0,aux=0;
    int cont=0,cont2=0;

    printf("VETOR A\n");
    for(i=0; i<=4; i++)
    {
        printf("ÍNDICE %d -> ",i);
        scanf("%d",&vet_a[i]);
    }
    printf("\nVETOR B\n");
    for(i=0; i<=4; i++)
    {
        printf("ÍNDICE %d -> ",i);
        scanf("%d",&vet_b[i]);
    }
    k=0;

    for(i=0; i<=4; i++)
    {
        for(j=0; j<=9; j++)
        {

            if(vet_a[i]!=vet_u[j])
                cont++;

            if(j == 9 &&  cont == 10)
            {
                vet_u[k] = vet_a[i];
                k++;
                cont2++;
                x++;
                cont=0;
            }
            else if (j == 9 && cont <10)
            {
                cont=0;

            }
        }
    }
    cont=0;
    aux = cont2;

    printf("\nA UNIÃO DE A E B:\n");

    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(vet_u[j]!=vet_b[i])
                cont++;

            if(j == 4 && cont == 5)
            {
                vet_u[cont2] = vet_b[i];
                cont2++;
                aux++;
                cont=0;
            }
            else if (j == 4 && cont <5)
            {
                cont=0;
            }

        }
    }

    aux--;

    for(i=0; i<=aux; i++)
        printf("%d,",vet_u[i]);


    cont=0;
    x--;
    printf("\nA INTERCESSÃO DE A E B:\n");
    for(i=0; i<=x; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(vet_u[i] == vet_b[j])
                cont++;
        }
        if(cont>0)
        {
            printf("%d,",vet_u[i]);
            cont=0;
        }
    }
    cont=0;
    printf("\nA DIFERENÇA DE A E B:\n");
    for(i=0; i<=x; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(vet_u[i] != vet_b[j])
                cont++;

            if(cont == 5)
            {
                printf("%d,",vet_u[i]);
                cont=0;
            }

        }
        if(cont<5)
            cont=0;

    }
    printf("\n");
    return 0;
}
