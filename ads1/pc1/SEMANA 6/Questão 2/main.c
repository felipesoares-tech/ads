#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////QUESTÃO 2 ////////////////////////////////////
int main()
{
 setlocale(LC_ALL,"Portuguese");
 float raio,altura,volume;

 printf("INFORME O VALOR DO RAIO: ");
 scanf("%f",&raio);
 printf("INFORME O VALOR DA ALUTRA: ");
 scanf("%f",&altura);
 volume = 3.141519 * (raio*raio) * altura;
 printf("\nO VOLUME É: %.2f",volume);
 system("PAUSE");


 return 0;
}
