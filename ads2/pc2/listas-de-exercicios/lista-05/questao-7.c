#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///7. Fa�a um programa contendo os servi�os que uma oficina mec�nica pode
///realizar: Ordem de servi�o (n�mero da OS, data, valor, servi�o realizado,
///cliente). Leia as informa��es sobre v�rias OS e determine, ao final, a m�dia dos
///valores, o nome do cliente que realizou o servi�o mais caro, juntamente com a
///descri��o desse servi�o e sua data de realiza��o.

typedef struct
{
    int dia, mes;
    int n_os;
    float vlr;
    char servico[500], cliente[50];

} dados;

int main()
{
    setlocale(LC_ALL,"");

    char op;
    int temp,armazn=60,cont=0;
    float soma=0;
    int j=0;
    dados x[60];

    printf("INFORME QUANTAS ORDENS DE SERVI�O SER�O REGISTRADAS (M�X = %d): ",armazn);
    scanf("%d", &temp);

    if (temp > 0)
    {
        do
        {
            for(int i=0; i<temp; i++,j++,armazn--)
            {
                setbuf(stdin, NULL);

                printf("\nINFORME O N�MERO DA ORDEM DE SERVI�O: ");
                scanf("%d", &x[j].n_os);

                printf("INFORME A DATA A QUAL FOI REALIZADO O SERVI�O (dd/mm): ");
                scanf("%d/%d", &x[j].dia, &x[j].mes);

                printf("INFORME O VALOR DO SERVI�O (R$): ");
                scanf("%f", &x[j].vlr);

                setbuf(stdin, NULL);

                printf("INFORME O SERVI�O REALIZADO (m�x = 500 caracteres): ");
                fgets(x[j].servico, 500, stdin);

                printf("INFORME O NOME DO CLIENTE: ");
                fgets(x[j].cliente, 50, stdin);

                soma+=x[j].vlr;
                cont++;
            }

            printf("\nDESEJA REGISTRAR OUTRAS ORDENS DE SERVI�OS ? [s/n]: ");
            op = getchar();

            if (op == 's' || op == 'S')
            {
                printf("INFORME QUANTAS ORDENS DE SERVI�O SER�O REGISTRADAS (M�X = %d): ",armazn);
                scanf("%d", &temp);
            }
            else
            {
                float maior;
                int ind=0;

                maior = x[0].vlr;

                for(int i=0; i<cont; i++)
                {
                    if(x[i].vlr>maior)
                    {
                        maior = x[i].vlr;
                        ind = i;
                    }
                }

                printf("\nM�DIA DE TODOS OS VALORES = R$%.2f\n",soma/cont);
                printf("\n>>CLIENTE QUE REALIZOU O SERVI�O MAIS CARO<<\n\n");

                printf("NOME -> %s",x[ind].cliente);
                printf("DESCRI��O -> %s",x[ind].servico);
                printf("VALOR -> R$%.2f\n",x[ind].vlr);
                printf("N�MERO DA OS -> %d\n",x[ind].n_os);
                printf("DATA DE REALIZA��O -> %.2d/%.2d/2022\n",x[ind].dia,x[ind].mes);

            }

        }
        while (op == 's' || op == 'S');


    }
    return 0;
}
