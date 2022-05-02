#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*8. Codifique um programa que recebe uma string e
substitui cada letra pela letra seguinte circularmente
(A é substituído por B, … e Z é substituido por A).
Escreva funções para codificar e decodificar strings.*/

void codificar(char *str)
{
    int tam = strlen(str), i;

    for (i = 0; i < tam - 1; i++, str++)
    {
        if (*str != 'z')
            *str += 1;
        else
            *str = 'a';
    }

    str -= i;
}

void decodificar(char *str)
{
    int tam = strlen(str), i;

    for (i = 0; i < tam - 1; i++, str++)
    {
        if (*str != 'a')
            *str -= 1;
        else
            *str = 'z';
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char string[100];
    int op;

    do
    {
        printf("\n[1] - CODIFICAR!\n");
        printf("[2] - DECODIFICAR!\n");
        printf(">>DIGITE UM VALOR NEGATIVO PARA SAIR<<\n");
        printf("\nESCOLHA: ");
        scanf("%d", &op);
        if (op > 0)
        {
            printf("\nPALAVRA (max 100): ");
            setbuf(stdin, NULL);
            fgets(string, 100, stdin);

            if (op == 1)
                codificar(string);
            else if (op == 2)
                decodificar(string);

            printf("%s", string);
        }

    } while (op > 0);

    return 0;
}