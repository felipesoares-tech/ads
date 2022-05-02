#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-8/////////////////
int main()
{
    int i,x=0;
    setlocale(LC_ALL,"");

    for(i=0; i<100; i+=2)
        x = x + i;

    printf("RESULTADO = %d",x);



    return 0;
}
