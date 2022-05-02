#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////QUESTÃO-1/////////////////////////
float not (float a, float b, float c, char d)
{
    float calc;

    if(d == 'a' || d == 'A')
        calc = (a+b+c)/3.00;
    else
        calc = ((a*5)+(b*3)+(c*2))/10.00;

    return calc;
}

int main()
{
    setlocale(LC_ALL,"");

    float n1,n2,n3;
    char let;

    printf("INFORME AS 3 NOTAS DO AULUNO:\n");
    scanf("%f%f%f",&n1,&n2,&n3);

    printf("\nDIGITE [A] PARA CÁLCULO DE MÉDIA ARITMÉTICA!\nDIGITE [P] PARA CÁLCULO DE MÉDIA PONDERADA!\n\n");
    printf("ESCOLHA: ");
    fflush(stdin);
    scanf("%c",&let);
    printf("\nMÉDIA = %.2f\n",not(n1,n2,n3,let));

    return 0;
}
