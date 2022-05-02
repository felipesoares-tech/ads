#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10. Escreva um programa em C para contar a
quantidade de palavras de um arquivo texto.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *arqv;
    char aux[100];
    int cont=0;

    arqv = fopen("arquivotexto.txt", "r");

    if (!arqv)
        printf("ERRO NA LEITURA!!");

    while (!feof(arqv))
            cont+=fscanf(arqv, "%s", aux);

    fclose(arqv);

    printf("\nQUANTIDADE DE PALAVRAS LIDAS = %d\n", cont);

    return 0;
}