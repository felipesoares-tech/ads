#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///1. Assumindo que o endere�o da vari�vel x foi atribu�do a um ponteiro px, escreva
///uma express�o que n�o usa x e sim um ponteiro e divida x por 5.

int main ()
{
    setlocale(LC_ALL,"");

    int x=10,*px=&x;

    *px/=5;

    printf("RESULTADO = %d",x);


    return 0;
}
