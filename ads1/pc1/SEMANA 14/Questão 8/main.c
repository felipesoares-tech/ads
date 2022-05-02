#include <stdio.h>
#include <stdlib.h>
#define TAM 65

typedef struct
{
    char cliente [50];
    float aluguel, iptu;
    int situacao;
    float fatura;

} cadastro;
int main()
{
    cadastro imovel [56];
    int i;
    float txadm,txbanco,multa,lucro=0;


    for (i=0; i<TAM; i++)
    {
        printf ("DIGITE O NOME DO CLIENTE [%d]:", i+1);
        fflush (stdin);
        gets (imovel[i].cliente);
        printf ("DIGITE O VALOR DO ALUGUEL: ");
        scanf ("%f",&imovel[i].aluguel);
        printf ("DIGITE O VALOR DO IPTU: ");
        scanf ("%f",&imovel[i].iptu);
        printf ("SITUACAO DO IMOVEL:\n[1] SEM ATRASO \n[2] COM ATRASO\n");
        printf ("DIGITE A SITUACAO DO IMOVEL:\n ");
        scanf ("%d",&imovel[i].situacao);

        if(imovel[i].aluguel<=500)
            txadm=0.08 * imovel[i].aluguel;
        else if (imovel[i].aluguel<=2000)
            txadm=0.05 * imovel[i].aluguel;
        else
            txadm=0.03 * imovel[i].aluguel;

        if(imovel[i].aluguel<1000)
            txbanco=1.50;
        else
            txbanco=0.95;

        imovel[i].fatura=imovel[i].aluguel+imovel[i].iptu+txadm+txbanco;

        if (imovel[i].situacao==1)
            multa = 0;
        else
            multa=0.02 * imovel[i].fatura;

        imovel[i].fatura= imovel[i].fatura+multa;
        lucro = lucro +imovel[i].fatura;
    }
    for(i=0;i<TAM;i++)
    {
       printf ("\n\nFATURAS FECHADAS\n\n");
       printf ("CLIENTE [%d]: %s\n",i+1,imovel[i].cliente);
       printf ("VALOR DO ALUGUEL: R$ %.2f\n",imovel[i].aluguel);
       printf ("VALOR DO IPTU: R$ %.2f\n",imovel[i].iptu);
       printf ("VALOR DA FATURA: R$ %.2f\n",imovel[i].fatura);

       if (imovel[i].situacao==2)
       printf ("FATURA EM ATRASO. COMPARECA AO ESCRITORIO IMEDIATAMENTE!!\n");

    }
    printf ("\nVALOR TOTAL FATURADO PELA IMOBILIARIA %.2f\n",lucro);


    return 0;
}
