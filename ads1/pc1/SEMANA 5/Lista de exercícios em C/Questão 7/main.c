#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int atr;
    float c1,c2,tot1,tot2,fim,sal;

    printf("VALOR DO SALÁRIO R$ ");
    scanf("%f",&sal);
    printf("VALOR DA CONTA 1 R$ ");
    scanf("%f",&c1);
    printf("VALOR DA CONTA 2 R$ ");
    scanf("%f",&c2);
    printf("DIAS DE ATRASO: ");
    scanf("%d",&atr);

    tot1 = (c1+ (c1*2/100)*atr);
    tot2 = (c2+ (c2*2.5/100)*atr);
    fim = sal - (tot1+tot2);

    printf("\nSALÁRIO RESTANTE -> R$%.2f\n", fim);
    system("PAUSE");

    return 0;
}
