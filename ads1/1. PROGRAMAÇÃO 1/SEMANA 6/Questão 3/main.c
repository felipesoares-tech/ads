#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
///////////////////////////////QUESTÃO 3 ////////////////////////////////////
setlocale(LC_ALL,"Portuguese");
float nht,vlsal,nhtext,vlrht,vlrhtext,salbase,salext,bruto,imp,liq;

printf("INFORME O VALOR DO SALÁRIO: R$");
scanf("%f",&vlsal);
printf("INFORME A QUANTIDADE DE HORAS TRABALHADAS: ");
scanf("%f",&nht);
printf("INFORME A QUANTIDADE DE HORAS EXTRAS ");
scanf("%f",&nhtext);

vlrht = vlsal/8;
vlrhtext = vlsal/4;
salbase = nht * vlrht;
salext = nhtext * vlrhtext;
bruto = salbase + salext;
imp = (8.5/100) * bruto;
liq = bruto - imp;

printf("\nSALÁRIO A RECEBER: R$%.2f\n\n",liq);
system("PAUSE");

return 0;
}
