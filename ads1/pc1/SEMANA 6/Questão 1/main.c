#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////QUESTÃO 1 ////////////////////////////////////
int main()
{
 setlocale(LC_ALL,"Portuguese");
 float vlrpro,porc,vlrnovo,desc;

 printf("INFORME O VALOR DO PRODUTO: R$");
 scanf("%f",&vlrpro);
 printf("INFORME A PORCENTAGEM DE DESCONTO: ");
 scanf("%f",&porc);
 desc = (porc/100) * vlrpro;
 vlrnovo = vlrpro - desc;

 printf("\nO VALOR A SER PAGO: R$%.2f", vlrnovo);
 printf("\nO VALOR DE DESCONTO: R$%.2f\n\n",desc);
 system("PAUSE");
}
