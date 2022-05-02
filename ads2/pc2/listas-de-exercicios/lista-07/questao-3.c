#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*3. Fa�a um programa que simule a mem�ria de um
computador: o usu�rio ir� especificar o tamanho da
mem�ria, ou seja, quantos bytes ser�o alocados do
tipo inteiro. Para tanto, a mem�ria solicitada deve ser
um valor m�ltiplo do tamanho do tipo inteiro. Em
seguida, o usu�rio ter� duas op��es: inserir um valor
em uma determinada posi��o ou consultar o valor
contido em uma determinada posi��o. A mem�ria
deve iniciar com todos os dados zerados.*/

void vef_pos(int tamanho, int aux)
{
    while (aux < 0 || aux >= tamanho)
    {
        printf("POSI��O INEXISTENTE, TENTE NOVAMENTE!!\n");

        printf("INFORME A POSI��O A QUAL DESEJA CONSULTAR [0-%d]: ", tamanho - 1);
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
        printf("\n[1] - CONSULTAR VALORES EM UMA DADA POSI��O!\n");
        printf("[2] - INSERIR VALORES EM UMA DADA POSI��O!\n");
        printf("[3] - LISTAR TODOS OS DADOS!\n");
        printf("(INFORME QUALQUER N�MERO NEGATIVO PARA SAIR!)\n");
        printf("\nESCOLHA: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("cls");

            printf("INFORME A POSI��O A QUAL DESEJA CONSULTAR [0-%d]: ", tam - 1);
            scanf("%d", &aux);

            vef_pos(tam,aux);

            pont += aux;
            printf("DADOS CONTIDOS NA POSI��O [%d] = %d\n\n", aux, *pont);
            pont -= aux;
            system("pause");
            break;
        case 2:
            system("cls");
            printf("INFORME A POSI��O A QUAL DESEJA INSERIR [0-%d]: ", tam - 1);
            scanf("%d", &aux);

            vef_pos(tam,aux);

            pont += aux;
            printf("INSIRA O N�MERO AQUI: ");
            scanf("%d", pont);
            pont -= aux;
            system("pause");
            break;
        case 3:
            system("cls");
            for (aux = 0; aux < tam; aux++, pont++)
                printf("POSI��O [%d] = %d\n", aux, *pont);

            pont -= aux;
            system("pause");
            break;
        }

    } while (op > 0);

    return 0;
}
