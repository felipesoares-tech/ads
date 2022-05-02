#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Escreva um programa que contenha duas vari?veis
inteiras. Leia essas vari?veis do teclado. Em seguida,
compare seus endere?os e exiba o conte?do do maior
endere?o.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vlr1, vlr2;
    int *p_vlr1 = &vlr1, *p_vlr2 = &vlr2;
    printf("\nINFORME O VALOR 1: ");
    scanf("%d", &vlr1);

    printf("INFORME O VALOR 2: ");
    scanf("%d", &vlr2);

    printf("\nENDERE?O 1: %p\nENDERE?O 2: %p\n\n", p_vlr1, p_vlr2);

    if (p_vlr1 > p_vlr2)
        printf("MAIOR ENDERE?O: %p, CONTE?DO: %d", p_vlr1, *p_vlr1);
    else
        printf("MAIOR ENDERE?O: %p, CONTE?DO: %d", p_vlr2, *p_vlr2);

    return 0;
}