#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////QUESTÃO-3/////////////////////////
float func(float a,float b)
{
    float perc;

    if(a>b)
        perc=((a-b)/a)*100.00;
    else
        perc=((b-a)/a)*100.00;

    return perc;
}

int main()
{
    setlocale(LC_ALL,"");

    float vl1,vl2;

    printf("INFORME RESPECTIVAMENTE O VALOR ANITGO E O VALOR ATUAL!!\n\n");
    printf("R$");
    scanf("%f",&vl1);
    printf("R$");
    scanf("%f",&vl2);

    if(vl1<vl2)
        printf("\nO PRODUTO TEVE UM ACRÉSCIMO DE %.2f%%\n",func(vl1,vl2));
    else
        printf("\nO PRODUTO TEVE UM DECRÉSCIMO DE %.2f%%\n",func(vl1,vl2));

    return 0;
}
