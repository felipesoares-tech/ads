#include <stdio.h>
#include <stdlib.h>
///////////////////////////QUESTÃO-1/////////////////
int main()
{
    int n1, n2;
    n1 = n2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);

    printf("Digite o primeiro numero: ");
    scanf("%d",&n2);

    printf("O menor numero e: %d", (n1<n2)?n1:n2);

    return 0;
}
