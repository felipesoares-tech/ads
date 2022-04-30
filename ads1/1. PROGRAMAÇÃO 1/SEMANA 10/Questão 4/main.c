#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
///////////////////////////QUESTÃO-4////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int num,cont,cont2;
    float doido;

    cont=0;
    cont2=1;
    doido=0;

    do
    {

        printf("INFORME O VALRO DE (N) -> ");
        scanf("%d", &num);

        while(cont<num)
        {
            doido = doido + (num-cont)/pow(cont2,cont2);
            cont2++;
            cont++;
        }

        printf("DOIDO = %.2f\n\n", doido);

        cont=0;
        cont2=1;
        doido=0;


    }while(num!=0);


    return 0;
}
