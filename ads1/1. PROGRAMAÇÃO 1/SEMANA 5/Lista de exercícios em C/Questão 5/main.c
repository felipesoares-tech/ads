#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float vlrfabrica,vlrfinal,vlrluc,vlrimp,vlrimp2,imp,lucro;

printf("PRECO DE FÁBRICA R$");
scanf("%f",&vlrfabrica);
printf("PERCENTUAL DE LUCRO:");
scanf("%f",&lucro);
printf("PERCENTUAL DE IMPOSTOS:");
scanf("%f",&imp);

vlrimp = (imp/100) * vlrfabrica; //calculo da porcentagem.... ex: se vlrfabrica = 10.000 e imp = 20% , ent temos R$2.000 de vlrimp
vlrimp2 = vlrfabrica + vlrimp; //valor do veiculo somando impostos R$12.000
vlrluc = (lucro/100) * vlrimp2; //calculo de lucro.. ex: se lucro = 30% , ent temos 0,3 * 12.000 , logo vlrluc = R$3.600
vlrfinal = vlrfabrica + vlrimp + vlrluc ; //preço total é, vlrfabrica = 10.000 + vlrimp = 2.000 + vlrluc = 3.6000

printf("\nLUCRO DO DISTRIBUIDOR --> R$%.2f\n",vlrluc);
printf("VALOR DE IMP --> R$%.2f\n", vlrimp);
printf("VALOR FINAL DO VEÍCULO --> R$%.2f\n", vlrfinal);
system("PAUSE");


return 0;
}
