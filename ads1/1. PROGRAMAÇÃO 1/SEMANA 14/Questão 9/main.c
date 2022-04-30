#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//////////////////////////////////////QUESTÃO-9///////////////////////////////////////////
typedef struct
{
    char rua[30], bairro[30],cidade[30], uf[3];
    int nro, cep;
} endereco;

typedef struct
{
    int num;
    char nome[50];
    char fone[20];
    endereco end;

} cadcli;

typedef struct
{
    int ncli;
    int nconta;
    float saldo;

} cadcont;

int main()
{
    cadcli cliente[50];
    cadcont conta[500];

    int i,nrocli,vef=0,x=0,y=0;

    do
    {
        vef=0;
        printf("CADASTRO DE CONTAS\n");
        printf("PARA SAIR, DIGITE 0 PARA O NÚMERO DO CLIENTE.\n");
        printf("DIGITE O NÚMERO DO CLIENTE: ");
        scanf("%d", &nrocli);

        if(nrocli!=0)
        {

            for(i=0; i<50; i++)
            {
                if(nrocli == cliente[i].num)
                    vef = 1;
            }

            if(vef == 1)
            {
                printf("DIGITE O NÚMERO DA CONTA: ");
                scanf("%d",&conta[x].nconta);
                printf("DIGITE O SALDO DA CONTA: ");
                scanf("%f",&conta[x].saldo);
                conta[x].ncli = nrocli;
                x++;

            }
            else
            {

                printf("CLIENTE NÃO CADASTRADO.\n");
                printf("CADASTRO DO CLIENTE:\n");
                cliente[y].num = nrocli;
                fflush(stdin);
                printf("DIGITE O NOME DO CLIENTE: ");
                gets(cliente[y].nome);

                printf("DIGITE O TELEFONE DO CLIENTE: ");
                gets(cliente[y].fone);

                printf("DIGITE O ENDEREÇO DO CLIENTE: \n");

                printf("RUA: ");
                gets(cliente[y].end.rua);

                printf("NÚMERO: ");
                scanf("%d",&cliente[y].end.nro);
                fflush(stdin);

                printf("BAIRRO: ");
                gets(cliente[y].end.bairro);

                printf("CEP: ");
                scanf("%d",&cliente[y].end.cep);
                fflush(stdin);

                printf("CIDADE: ");
                gets(cliente[y].end.cidade);

                printf("ESTADO: ");
                gets(cliente[y].end.uf);

                y++;

                printf("DIGITE O NÚMERO DA CONTA: ");
                scanf("%d",&conta[x].nconta);
                printf("DIGITE O SALDO DA CONTA: ");
                scanf("%f",&conta[x].saldo);
                conta[x].ncli = nrocli;

            }
        }
    }
    while(nrocli!=0);

    for(i=0; i<x; i++)
    {
        printf("NÚMERO DO CLIENTE: %d\n",conta[i].ncli);
        printf("NÚMERO DA CONTA %d\n",conta[i].nconta);
        printf("SALDO DA CONTA: %.2f\n",conta[i].saldo);
    }

    return 0;
}
