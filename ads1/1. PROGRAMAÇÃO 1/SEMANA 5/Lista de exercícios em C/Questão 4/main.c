#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float salmin,qtdkw,cemqw,vlrasp,kw,vlraspd;

printf("VALOR DE SALÁRIO: R$ ");
scanf("%f",&salmin);
printf("QUANTIDADE DE QW GASTOS: ");
scanf("%f",&kw);

cemqw = salmin/7;
qtdkw = cemqw/100;
vlrasp = qtdkw*kw;
vlraspd = 0.9 * vlrasp;

printf("\nVALOR DE CADA QUILOWATT: %.2f",qtdkw);
printf("\nVALOR A SER PAGO: R$%.2f",vlrasp);
printf("\nVALOR A SER PAGO COM DESCONTO DE 10%%: R$%.2f\n",vlraspd);
system("PAUSE");

return 0;
}
