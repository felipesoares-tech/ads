#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float gorj,desp,total,taxa;

printf("VALOR DA CONTA: R$");
scanf("%f",&desp);
printf("VALOR DA GORJETA: R$");
scanf("%f",&gorj);

taxa = 0.1 * desp;
total = taxa + desp + gorj;
printf("\nVALOR TOTAL (GORJETA INCLUSA)-> R$%.2f\n",total);
system("PAUSE");

return 0;
}
