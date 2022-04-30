#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
int nht;
float salario,salariob,vlrht,imp,salarionv;

printf("INFORME O VALOR DO SALÁRIO: R$");
scanf("%f",&salario);
printf("INFORME A QUANTIDADE DE HORAS TRABALHADAS: ");
scanf("%d",&nht);

vlrht = salario/10;
salariob = vlrht * nht;
imp = 0.085 * salariob;
salarionv = salariob - imp;
printf("SALÁRIO A RECEBER: R$%.2f\n",salarionv);
system("PAUSE");


return 0;
}
