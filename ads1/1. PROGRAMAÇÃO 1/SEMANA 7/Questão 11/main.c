#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 11///////////////////////////
int main()
{

    int n;

    setlocale(LC_ALL,"");

    printf("DIGITE UM NÚMERO: ");
    scanf("%d",&n);

    if (n > 0)
        printf("\nO NÚMERO DIGITADO É POSITIVO!");
    else if (n < 0)
        printf("\nO NÚMERO DIGITADO É NEGATIVO");
    else
        printf("\nO NÚMERO DIGITADO É NULO !!");



    return 0;
}
