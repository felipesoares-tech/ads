#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*3. Faça um programa que simule a memória de um
computador: o usuário irá especificar o tamanho da
memória, ou seja, quantos bytes serão alocados do
tipo inteiro. Para tanto, a memória solicitada deve ser
um valor múltiplo do tamanho do tipo inteiro. Em
seguida, o usuário terá duas opções: inserir um valor
em uma determinada posição ou consultar o valor
contido em uma determinada posição. A memória
deve iniciar com todos os dados zerados.*/

void vef_pos(int tamanho, int aux)
{
    while (aux < 0 || aux >= tamanho)
    {
        printf("POSIÇÃO INEXISTENTE, TENTE NOVAMENTE!!\n");

        printf("INFORME A POSIÇÃO A QUAL DESEJA CONSULTAR [0-%d]: ", tamanho - 1);
        scanf("%d", &aux);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam, op, aux;

    printf("\nINFORME A QUANTIDADE DE BYTES A SEREM ALOCADOS: ");
    scanf("%d", &tam);

    int *pont = (int *)malloc(sizeof(int) * tam);

    memset(pont, 0, tam);

    do
    {
        system("cls");
        printf("\n[1] - CONSULTAR VALORES EM UMA DADA POSIÇÃO!\n");
        printf("[2] - INSERIR VALORES EM UMA DADA POSIÇÃO!\n");
        printf("[3] - LISTAR TODOS OS DADOS!\n");
        printf("(INFORME QUALQUER NÚMERO NEGATIVO PARA SAIR!)\n");
        printf("\nESCOLHA: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("cls");

            printf("INFORME A POSIÇÃO A QUAL DESEJA CONSULTAR [0-%d]: ", tam - 1);
            scanf("%d", &aux);

            vef_pos(tam,aux);

            pont += aux;
            printf("DADOS CONTIDOS NA POSIÇÃO [%d] = %d\n\n", aux, *pont);
            pont -= aux;
            system("pause");
            break;
        case 2:
            system("cls");
            printf("INFORME A POSIÇÃO A QUAL DESEJA INSERIR [0-%d]: ", tam - 1);
            scanf("%d", &aux);

            vef_pos(tam,aux);

            pont += aux;
            printf("INSIRA O NÚMERO AQUI: ");
            scanf("%d", pont);
            pont -= aux;
            system("pause");
            break;
        case 3:
            system("cls");
            for (aux = 0; aux < tam; aux++, pont++)
                printf("POSIÇÃO [%d] = %d\n", aux, *pont);

            pont -= aux;
            system("pause");
            break;
        }

    } while (op > 0);

    return 0;
}
