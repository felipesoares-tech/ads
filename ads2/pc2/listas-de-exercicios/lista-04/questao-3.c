#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///3. Faça um programa que tenha funções que sejam capazes de receber dois
///valores como parâmetros e realizem as operações de soma, subtração,
///multiplicação e divisão.

void buff(void)
{
    setbuf(stdin,NULL);
}

float soma(float a, float b)
{
    return a+b;
}

float mult(float a, float b)
{
    return a*b;
}

float sub(float a, float b)
{
    return a-b;
}

float divisao(float a, float b)
{
    return a/b;
}
int main()
{
    setlocale(LC_ALL,"");

    float vl1,vl2;

    printf("INFORME O VALOR 1: ");
    scanf("%f",&vl1);

    printf("INFORME O VALOR 2: ");
    scanf("%f",&vl2);

    printf("\nSOMA = %.2f\n",soma(vl1,vl2));
    printf("MULTIPLICAÇÃO = %.2f\n",mult(vl1,vl2));
    printf("SUBTRAÇÃO = %.2f\n",sub(vl1,vl2));
    printf("DIVISÃO = %.2f\n",divisao(vl1,vl2));


    return 0;
}
