#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////////////QUESTÃO-4/////////////////////////////////

void inv (int *a,int n)
{
    int i,j,b[10];

    for(i=0; i<10; i++)
        b[i] = a[i];

    for(i=0,j=9; i<10; i++,j--)
        a[i] = b[j];
}

int main()
{
    setlocale(LC_ALL,"");

    int vet[10];
    int i;

    for(i=0; i<=9; i++)
    {
        printf("ÍNDICE [%d] -> ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("\nVETOR NORMAL:\n\n");

    for(i=0; i<10; i++)
        printf("%d\n",vet[i]);

    inv(vet,10);

    printf("\nVETOR INVERSO:\n\n");

    for(i=0; i<10; i++)
        printf("%d\n",vet[i]);

    return 0;
}
