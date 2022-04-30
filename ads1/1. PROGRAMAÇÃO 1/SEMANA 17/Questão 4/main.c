#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int glob=0;

/////////////////////////QUESTÃO-4/////////////////////////
int func(int *a,int n)
{
    int fatorial (int num)
    {
        int fat;

        for(fat=1; num>=1; num--)
            fat = fat * num;

        return fat;
    }

    int b[10];
    int i;

    for(i=0; i<10; i++)
        b[i] = fatorial(a[i]);


    return b[glob];
}

int main()
{
    setlocale(LC_ALL,"");

    int i;
    int vet[10];
    int vetb[10];

    for(i=0; i<10; i++)
    {
        printf("ÍNDICE [%d] -> ",i+1);
        scanf("%d",&vet[i]);
    }

    printf("\nVETOR FATORADO\n\n");

    for(i=0,glob=0; i<10; i++,glob++)
    {
        vetb[i] = func(vet,10);
        printf("INDÍCE [%d] = %d\n",i+1,vetb[i]);
    }

    return 0;
}
