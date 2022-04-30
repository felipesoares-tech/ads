#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 14///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int ano1,ano2,idade;

    printf("INFORME O ANO ATUAL: ");
    scanf("%d",&ano1);

    printf("INFORME O ANO DE NASCIMENTO: ");
    scanf("%d",&ano2);

    if(ano2 >= ano1)
        printf("\nO ANO DE NASCIMENTO É INVÁLIDO, POR GENTILEZA TENTE NOVAMENTE!");
    else
        idade = ano1-ano2;
        if(idade >= 18)
            printf("\nVOCÊ TEM %d ANOS, VOCÊ PODE VOTAR E TIRAR SUA CNH\n");
        else if(idade >= 16)
                printf("\nVOCÊ TEM %d ANOS, VOCÊ PODE VOTAR MAS NÃO PODE TIRAR SUA CNH\n");
        else if (idade < 16)
            printf("\nVOCÊ TEM %d ANOS, VOCÊ NÃO PODE VOTAR E NEM TIRAR A SUA CNH!\n");

    return 0;
}
