#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O 11///////////////////////////
int main()
{

    int n;

    setlocale(LC_ALL,"");

    printf("DIGITE UM N�MERO: ");
    scanf("%d",&n);

    if (n > 0)
        printf("\nO N�MERO DIGITADO � POSITIVO!");
    else if (n < 0)
        printf("\nO N�MERO DIGITADO � NEGATIVO");
    else
        printf("\nO N�MERO DIGITADO � NULO !!");



    return 0;
}
