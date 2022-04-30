#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////QUESTÃO 4 ////////////////////////////////////
int main (){

setlocale(LC_ALL,"Portuguese");
int minutos,fim;
float horas,minutos2,transf;

printf("INFORME AS HORAS E MINUTOS: ");
scanf("%f",&horas);

minutos = horas; //A VARIÁVEL MINUTOS É DO TIPO INTEIRO, A VARÍAVEL HORAS É DO TIPO FLOAT, LOGO SE HORAS = 1,30 , MINUTOS VALEM 1!!
minutos2 = horas - minutos; //SE MINUTOS VALEM 1, E HORAS VALEM 1,30 , LOGO MINUTOS2 VALE 0,30
transf = minutos2*100; //TRANSFORMANDO O 0,30 EM 30 PARA POSTERIORMENTE SOMA-LO AS HORAS.
minutos = minutos * 60; //AQUI TRANSFORMAMOS AS HORAS EM MINUTOS.
fim = transf + minutos; //AQUI REALIZAMOS A SOMA FINAL.

printf("\n%.2f(HORAS/MINUTOS) EQUIVALEM A %d MINUTOS :)\n\n",horas,fim);

system("PAUSE");

return 0;
}
