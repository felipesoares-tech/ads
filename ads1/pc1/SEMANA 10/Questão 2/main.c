#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O-2////////////////////////////
int main()
{

    setlocale(LC_ALL,"");

    int num,cont,cond;
    float soma;

    cont=0;

    do
    {
        printf("DIGITE UM N�MERO -> ");
        scanf("%d", &num);

        cond = num-1;


        while(cont<cond)
        {

            cont++;
            if(num%cont == 0 )
            {
                soma = soma + cont;
            }
        }


        if (soma == num)
        {
            printf("\nESTE N�MERO � PERFEITO !\n\n");
        }
        else
        {
            printf("\nESTE N�MERO � IMPERFEITO \n\n");
        }

        soma=0;
        cont=0;

    }
    while(num!=0);


    return 0;
}
