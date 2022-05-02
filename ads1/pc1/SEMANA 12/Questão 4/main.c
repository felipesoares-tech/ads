#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-04////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int num[100];
    int i,n,x;

    for(i=0; i<=99; i++)
    {

        printf("DIGITE O VALOR DO ÍNDICE %d -> ",i);
        scanf("%d",&num[i]);
    }

    printf("\nESCOLHA UM NÚMERO -> ");
    scanf("%d",&n);

    for(i=0,x=0; i<=99; i++)
    {
        if(num[i] == n)
            printf("\nO NÚMERO INFORMADO ESTÁ NA POSIÇÃO %d",i);
            else
                x++;
    }
        if(x == 5)
            printf("\n0\n");


    return 0;
}
