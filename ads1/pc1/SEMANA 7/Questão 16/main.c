#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 16///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    float VL1,VL2,VL3;

    printf("INFORME O VALOR 1: ");
    scanf("%f",&VL1);

    printf("INFORME O VALOR 2: ");
    scanf("%f",&VL2);

    printf("INFORME O VALOR 3: ");
    scanf("%f",&VL3);

    if(VL1 > VL2 && VL1 > VL3 && VL3 < VL2)
        printf("\nO MAIOR VALOR É %.2f E O MENOR VALOR É %.2f",VL1,VL3);
    else if (VL1 > VL2 && VL1 > VL3 && VL2 < VL3)
        printf("\nO MAIOR VALOR É %.2f E O MENOR VALOR É %.2f",VL1,VL2);
    else if (VL2 > VL1 && VL2 >  VL3 && VL3 < VL1)
        printf("\nO MAIOR VALOR É %.2f E O MENOR VALOR É %.2f",VL2,VL3);
    else if (VL2 > VL1 && VL2 > VL3 && VL1 < VL3)
        printf("\nO MAIOR VALOR É %.2f E O MENOR VALOR É %.2f",VL2,VL1);
    else if (VL3 > VL1 && VL3 > VL2 && VL1 < VL2)
        printf("\nO MAIOR VALOR É %.2f E O MENOR VALOR É %.2f",VL3,VL1);
    else if (VL3 > VL1 && VL3 > VL2 && VL2 < VL1)
        printf("\nO MAIOR VALOR É %.2f E O MENOR VALOR É %.2f",VL3,VL2);




    return 0;

}
