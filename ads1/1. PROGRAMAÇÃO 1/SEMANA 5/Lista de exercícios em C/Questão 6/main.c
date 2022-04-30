#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

float prest,vlr,taxa;
int atraso;

printf("VALOR INICIAL DA PRESTAÇÃO R$ ");
scanf("%f",&vlr);
printf("VALOR TAXA DE JUROS: ");
scanf("%f",&taxa);
printf("TEMPO DE ATRASO: ");
scanf("%d",&atraso);

prest = vlr + (vlr*(taxa/100)*atraso);

printf("\nVALOR A SER PAGO --> R$%.2f\n", prest);
system("PAUSE");

}
