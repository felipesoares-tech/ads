#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*4. Faça uma função recursiva que calcule o valor da série
S descrita a seguir para um valor n > 0 a ser fornecido
como parâmetro para a mesma.*/

float serie(float n)
{
    if(n>0)
        return (1.00+(n*n))/n+serie(n-1);
    else
        return 0;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float n;

    printf("INFORME O VALOR DE N: ");
    scanf("%f",&n);

    printf("RESULTADO = %.2f\n",serie(n));
    

    return 0;
}