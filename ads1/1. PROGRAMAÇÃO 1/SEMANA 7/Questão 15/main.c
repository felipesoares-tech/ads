#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 15///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    float L1,L2,L3;

    printf("INFORME O VALOR DO LADO 1! -->");
    scanf("%f",&L1);

    printf("INFORME O VALOR DO LADO 2! -->");
    scanf("%f",&L2);

    printf("INFORME O VALOR DO LADO 3! -->");
    scanf("%f",&L3);

    if (L1 == L2 && L2 == L3)
        printf("\nESTE TRIÂNGULO É EQUILÁTERO !!");
    else if (L1 == L2 && L3 != L1 && L3 != L2 || L2 == L3 && L1 != L2 && L1 != L3 || L1 == L3 && L2 != L1 && L2 != L3)
        printf("\nESTE TRIÂNGULO É ISÓCELES !!");
    else
        printf("\nESTE TRIÂNGULO É ESCALENO");




    return 0;
}
