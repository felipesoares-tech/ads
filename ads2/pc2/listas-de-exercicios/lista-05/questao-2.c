#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///2. Escreva um programa que declare um inteiro, um real e um char, e ponteiros
///para inteiro, real, e char. Associe as vari�veis aos ponteiros (use &). Modifique
///os valores de cada vari�vel usando os ponteiros. Imprima os valores das
///vari�veis antes e ap�s a modifica��o.

int main ()
{
    setlocale(LC_ALL,"");

    int a=10,*pa=&a;
    float b=10.5,*pb=&b;
    char c='d',*pc=&c;

    printf("a(int) = %d\n",a);
    printf("b(float) = %.2f\n",b);
    printf("c(char) = %c\n\n",c);

    printf("INFORME O VALOR DE (a): ");
    scanf("%d",pa);
    printf("INFORME O VALOR DE (b): ");
    scanf("%f",pb);
    fflush(stdin);
    printf("INFORME O VALOR DE (c): ");
    *pc = getchar();

    printf("\nVALORES AP�S A MODIFICA��O:\n");

    printf("a(int) = %d\n",a);
    printf("b(float) = %.2f\n",b);
    printf("c(char) = %c\n\n",c);



    return 0;
}
