#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int potencia(int base, int expoente)
{
    if(expoente==0)
        return 1;
    if(expoente==1)
        return base;

    return base*potencia(base,expoente-1);
}

int main ()
{
    setlocale(LC_ALL,"");

    int ba,ex;

    printf("INFORME O VALOR DA BASE: ");
    scanf("%d",&ba);

    printf("INFORME O VALOR DO EXPOENTE: ");
    scanf("%d",&ex);

    printf("\nRESULTADO = %d\n",potencia(ba,ex));


    return 0;
}
