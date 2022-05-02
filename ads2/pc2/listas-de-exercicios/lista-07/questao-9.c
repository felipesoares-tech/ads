#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*9. Escreva um programa que funciona como o jogo da FORCA. O usu?rio tenta acertar uma palavra (contida
numa vari?vel) usando 5 tentativas. A palavra ?
mostrada ao usu?rio com as letras marcadas com o
s?mbolo '*'. O usu?rio deve digitar uma letra (sem
acentos, til, trema) e caso a letra esteja correta, o
s?mbolo '*' ? substitu?do pela letra. Se o usu?rio n?o
montar a palavra at? a quinta tentativa, o jogo acaba
em derrota.
*/

void desenho(int cont)
{
    switch (cont)
    {
    case 1:
        printf(" O ");
        break;
    case 2:
        printf(" O ");
        printf("\n | ");
        break;
    case 3:
        printf(" O ");
        printf("\n/| ");
        break;
    case 4:
        printf(" O ");
        printf("\n/|\\ ");
        break;
    case 5:
        printf(" O ");
        printf("\n/|\\ ");
        printf("\n/ \\ ");
        break;
    }
}

void str_ajuste(char *string)
{
    int tam = strlen(string);

    string += tam - 1;
    *string = '\0';
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[] = "baleia\0";
    char tentativa[100];
    int tam = strlen(palavra), i, cont_e = 0;
    char aux[tam + 1], letr, *id;

    for (i = 0; i < tam; i++)
    {
        if (aux[i] != " ")
            aux[i] = '*';
    }

    aux[i] = '\0';

    do
    {
        printf(">>JOGO DA FORCA<<\n\n");

        desenho(cont_e);

        printf("\n\n%s\n\n", aux);
        setbuf(stdin, NULL);

        if (strcmp(aux, palavra) == 0)
        {
            printf("\nPARABÉNS!!");
            exit(1);
        }

        printf("DESEJA ARRISCAR UM PALPITE ? [s/n]: ");
        letr = getchar();

        if (letr == 's' || letr == 'S' || letr == 'n' || letr == 'N')
            i = 1;
        else
            i = 0;

        while (i != 1)
        {
            system("cls");
            printf("*********RESPOSTA INVÁLIDA!!*********\n\n");

            printf(">>JOGO DA FORCA<<\n\n");

            desenho(cont_e);

            printf("\n\n%s\n\n", aux);
            setbuf(stdin, NULL);

            printf("DESEJA ARRISCAR UM PALPITE ? [s/n]: ");
            letr = getchar();

            if (letr == 's' || letr == 'S' || letr == 'n' || letr == 'N')
                i = 1;
            else
                i = 0;
        }

        setbuf(stdin, NULL);

        if (letr == 'S' || letr == 's')
        {
            printf("RESPOSTA: ");
            fgets(tentativa, 100, stdin);
            str_ajuste(tentativa);
            system("cls");

            if (strcmp(tentativa, palavra) == 0)
            {
                printf(">>JOGO DA FORCA<<\n\n");
                desenho(cont_e);

                printf("\n\n%s\n\n", palavra);

                printf("PARAB?NS, PALAVRA CORRETA!\n");
                exit(1);
            }
            else
            {
                cont_e++;
                printf(">>JOGO DA FORCA<<\n\n");
                desenho(cont_e);

                printf("\n\n%s\n\n", aux);
                printf("RESPOSTA INCORRETA! VOCÊ POSSUI %d CHANCES!!\n\n", 5 - cont_e);
            }
        }

        printf("\nDIGITE UMA LETRA: ");
        letr = getchar();

        if ((id = (strchr(palavra, letr))))
        {
            system("cls");
            for (i = 0; i < tam; i++)
            {
                if (*id == palavra[i])
                    aux[i] = *id;
            }
        }
        else
        {
            cont_e++;
            system("cls");
            printf("LETRA NÃO ENCONTRADA! VOCÊ POSSUI %d CHANCES!!\n\n", 5 - cont_e);
        }

    } while (cont_e < 5);
    printf(">>>>>>>GAME OVER<<<<<<<\n\n");
    desenho(cont_e);

    printf("\n\nA PALAVRA CORRETA ERA ->%s\n\n", palavra);
    system("pause");

    return 0;
}