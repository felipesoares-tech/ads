#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////QUESTÃO 16////////////
int main()
{
    setlocale(LC_ALL,"");

    int n,cont,cont2;
    float y;

    cont=0;
    cont2=0;
    y=0;

    printf("DIGITE UM NÚMERO -> ");
    scanf("%d", &n);


    while(n>0)
    {
        while(cont<n)
        {
            cont++;
            y = (n%cont);
            if(y == 0)
            {
             cont2++;
            }
        }

        if(cont2 == 2)
        {
            printf("O NÚMERO INFORMADO É PRIMO !!\n");
        }else{

            printf("O NÚMERO INFORMADO NÃO É PRIMO !!\n");
        }

        cont=0;
        cont2=0;
        y=0;

        printf("DIGITE UM NÚMERO -> ");
        scanf("%d", &n);


    }
    return 0;
}
