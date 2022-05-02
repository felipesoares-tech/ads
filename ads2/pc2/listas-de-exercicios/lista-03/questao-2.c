#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///Escreva um algoritmo que solicite ao usuário a entrada de 10 nomes, e que exiba a
///lista desses nomes na tela. Após exibir essa lista, o programa deve mostrar também
///os nomes na ordem inversa em que o usuário os digitou, um por linha.

int main()
{
    setlocale(LC_ALL,"");

    char nomes[10][50];

    for(int i=0; i<10; i++)
    {
        fflush(stdin);
        printf("INFORME O %d° NOME: ",i+1);
        fgets(nomes[i],10,stdin);

    }

    printf("\nNOMES DIGITADOS:\n");

    for(int i=0; i<10; i++)
    {
        printf("%s",nomes[i]);
    }

    printf("\nNOMES INVERSOS:\n");

    for(int i=9; i>-1; i--)
    {
        printf("%s",nomes[i]);
    }




    return 0;
}
