#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*2. Faça um programa que leia três valores inteiros e
chame uma função que receba esses 3 valores de
entrada e retorne eles ordenados, ou seja, o menor
valor na primeira variável, o segundo menor valor na
variável do meio, e o maior valor na última variável. A
função deve retornar o valor 1 se os três valores forem
iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.*/

// Insertion sort function
void insertion_sort(int *a)
{
    int i, j, tmp;

    for(i = 1; i < 3; i++)
    {
        tmp = a[i];
        for(j = i-1; j >= 0 && tmp < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = tmp;
    }
}

int cmp(int *valor1, int *valor2, int *valor3)
{
    int vet[3];

    vet[0] = *valor1;
    vet[1] = *valor2;
    vet[2] = *valor3;

    if (*valor1 == *valor2 && *valor3 == *valor2)
        return 1;
    else
    {

        insertion_sort(vet);

        *valor1=vet[0];
        *valor2=vet[1];
        *valor3=vet[2];

    }

        return 0;
}

int main()
{
    setlocale(LC_ALL, "");

    int vl1, vl2, vl3;
    int ret;

    printf("\nINFORME O PRIMEIRO VALOR: ");
    scanf("%d", &vl1);

    printf("INFORME O SEGUNDO VALOR: ");
    scanf("%d", &vl2);

    printf("INFORME O TERCEIRO VALOR: ");
    scanf("%d", &vl3);

    int *p_vl1 = &vl1, *p_vl2 = &vl2, *p_vl3 = &vl3;

    if((ret = cmp(p_vl1, p_vl2, p_vl3))==0)
        printf("\n%d %d %d", vl1, vl2, vl3);

    

    return 0;
}