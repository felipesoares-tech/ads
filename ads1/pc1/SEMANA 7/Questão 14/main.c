#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O 14///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int ano1,ano2,idade;

    printf("INFORME O ANO ATUAL: ");
    scanf("%d",&ano1);

    printf("INFORME O ANO DE NASCIMENTO: ");
    scanf("%d",&ano2);

    if(ano2 >= ano1)
        printf("\nO ANO DE NASCIMENTO � INV�LIDO, POR GENTILEZA TENTE NOVAMENTE!");
    else
        idade = ano1-ano2;
        if(idade >= 18)
            printf("\nVOC� TEM %d ANOS, VOC� PODE VOTAR E TIRAR SUA CNH\n");
        else if(idade >= 16)
                printf("\nVOC� TEM %d ANOS, VOC� PODE VOTAR MAS N�O PODE TIRAR SUA CNH\n");
        else if (idade < 16)
            printf("\nVOC� TEM %d ANOS, VOC� N�O PODE VOTAR E NEM TIRAR A SUA CNH!\n");

    return 0;
}
