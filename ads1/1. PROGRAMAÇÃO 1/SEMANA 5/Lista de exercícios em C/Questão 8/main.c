#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,aux;

    printf("INFORME O VALOR DE A: ");
    scanf("%d",&a);
    printf("INFORME O VALOR DE B: ");
    scanf("%d",&b);

    aux = b;
    b = a;
    a = aux;

    printf("\nVALOR DE A -> %d",a);
    printf("\nVALOR DE B -> %d\n",b);
    system("PAUSE");

    return 0;
}
