#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-6/////////////////
int main()
{
    int x,y,z,i;

    setlocale(LC_ALL,"");

    printf("INFORME O X -> ");
    scanf("%d",&x);

    printf("INFORME O Y -> ");
    scanf("%d",&y);

    z = x;

    for(i=1; i<y; i++)
        x = x*z;

    printf("RESULTADO = %d", x);

    return 0;
}
