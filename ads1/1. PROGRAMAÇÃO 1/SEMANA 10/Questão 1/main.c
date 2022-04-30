#include <stdio.h>
#include <stdlib.h>
///////////////////////////QUESTÃO-1////////////////////////////

int main()
{

    int b,x,tot;
    float a;

    x=0;
    tot=0;

    a=1;
    b=0;

    printf("PARA FINALIZAR, DIGITE (0) EM ALGUNS DOS VALORES\n\n");

    while(a!=0)

    {


        printf("INFORME O VALOR DE (A) -> ");
        scanf("%f", &a);

        printf("INFORME O VALOR DE (B) -> ");
        scanf("%d", &b);

        while(x<b)
        {
            tot = tot + a;
            x++;
        }

        printf("\nRESULTADO -> %d\n\n", tot);
        x=0;
        tot=0;

    }



    return 0;
}
