#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///7. Faça um programa contendo os serviços que uma oficina mecânica pode
///realizar: Ordem de serviço (número da OS, data, valor, serviço realizado,
///cliente). Leia as informações sobre várias OS e determine, ao final, a média dos
///valores, o nome do cliente que realizou o serviço mais caro, juntamente com a
///descrição desse serviço e sua data de realização.

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

    printf("INFORME QUANTAS ORDENS DE SERVIÇO SERÃO REGISTRADAS (MÁX = %d): ",armazn);
    scanf("%d", &temp);

    if (temp > 0)
    {
        do
        {
            for(int i=0; i<temp; i++,j++,armazn--)
            {
                setbuf(stdin, NULL);

                printf("\nINFORME O NÚMERO DA ORDEM DE SERVIÇO: ");
                scanf("%d", &x[j].n_os);

                printf("INFORME A DATA A QUAL FOI REALIZADO O SERVIÇO (dd/mm): ");
                scanf("%d/%d", &x[j].dia, &x[j].mes);

                printf("INFORME O VALOR DO SERVIÇO (R$): ");
                scanf("%f", &x[j].vlr);

                setbuf(stdin, NULL);

                printf("INFORME O SERVIÇO REALIZADO (máx = 500 caracteres): ");
                fgets(x[j].servico, 500, stdin);

                printf("INFORME O NOME DO CLIENTE: ");
                fgets(x[j].cliente, 50, stdin);

                soma+=x[j].vlr;
                cont++;
            }

            printf("\nDESEJA REGISTRAR OUTRAS ORDENS DE SERVIÇOS ? [s/n]: ");
            op = getchar();

            if (op == 's' || op == 'S')
            {
                printf("INFORME QUANTAS ORDENS DE SERVIÇO SERÃO REGISTRADAS (MÁX = %d): ",armazn);
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

                printf("\nMÉDIA DE TODOS OS VALORES = R$%.2f\n",soma/cont);
                printf("\n>>CLIENTE QUE REALIZOU O SERVIÇO MAIS CARO<<\n\n");

                printf("NOME -> %s",x[ind].cliente);
                printf("DESCRIÇÃO -> %s",x[ind].servico);
                printf("VALOR -> R$%.2f\n",x[ind].vlr);
                printf("NÚMERO DA OS -> %d\n",x[ind].n_os);
                printf("DATA DE REALIZAÇÃO -> %.2d/%.2d/2022\n",x[ind].dia,x[ind].mes);

            }

        }
        while (op == 's' || op == 'S');


    }
    return 0;
}
