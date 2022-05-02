#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define AV 5

///ALUNOS: FELIPE SOARES e ELISABETE XAVIER
///OBS: TODOS OS LUGARES SERÃO DISTRIBUIDOS DE FORMA SEQUENCIAL, SENDO ASSIM NÃO É POSSÍVEL O USUÁRIO ESCOLHER O LUGAR O QUAL DESEJA SENTAR.
typedef struct
{
    int dia_p, mes_p, ano_p;
} dados1; ///ESTRUTURA RESPONSÁVEL EM ARMAZENAR A DATA A QUAL A PASSAGEM FOI COMPRADA.
///----------------------------------------///
typedef struct
{
    int num,dia,mes,ano,cap;
    char origem[50],destino[50];
    float hora,valor;
    int ind;
} registro_voo; ///ESTRUTURA RESPONSÁVEL EM REALIZAR OS REGISTROS DE TODOS OS VOOS
///----------------------------------------///
typedef struct
{
    char nome[50],cpf[13];
    int polt;
    float valor;
    dados1 data;
} passagem; ///ESTRUTURA RESPONSÁVEL POR COMPORTAR TODOS OS DADOS DOS CLIENTES QUE IRÃO EMBARCAR EM SEUS RESPECTIVOS VOOS
///----------------------------------------///
void calc(passagem a[][180],int n1,int i,int j,registro_voo c[],int n2 )
{
    ///A FUNÇÃO "CALC" É RESPONSÁVEL PELO CÁLCULO DOS MESES, E TAMBÉM PARA EMITIR CADA COMPROVANTE DE PASSAGEM
    if(c[i].mes-a[i][j].data.mes_p==1)
    {
        if(a[i][j].data.mes_p==4||a[i][j].data.mes_p==6||a[i][j].data.mes_p==9||a[i][j].data.mes_p==9||a[i][j].data.mes_p==11)

            if(a[i][j].data.dia_p<=c[i].dia)
                a[i][j].valor=c[i].valor-(c[i].valor*0.05);
            else
                a[i][j].valor=c[i].valor;


        else if(a[i][j].data.mes_p==1||a[i][j].data.mes_p==3||a[i][j].data.mes_p==5||a[i][j].data.mes_p==7||a[i][j].data.mes_p==8||a[i][j].data.mes_p==10)
        {
            if(a[i][j].data.dia_p-1<=c[i].dia)
                a[i][j].valor=c[i].valor-(c[i].valor*0.05);
            else
                a[i][j].valor=c[i].valor;
        }
        else if (a[i][j].data.mes_p==2)
        {
            if(a[i][j].data.dia_p+2<=c[i].dia)
                a[i][j].valor=c[i].valor-(c[i].valor*0.05);
            else
                a[i][j].valor=c[i].valor;
        }

    }
    else  if(a[i][j].data.mes_p-c[i].mes==11)
    {
        if(a[i][j].data.dia_p-1<=c[i].dia)
            a[i][j].valor=c[i].valor-(c[i].valor*0.05);
        else
            a[i][j].valor=c[i].valor;
    }
    else if(c[i].mes-a[i][j].data.mes_p>1)
        a[i][j].valor=c[i].valor-(c[i].valor*0.05);

    else if(c[i].mes-a[i][j].data.mes_p==0)
    {
        if(c[i].dia-a[i][j].data.dia_p==30)
            a[i][j].valor=c[i].valor-(c[i].valor*0.05);
        else
            a[i][j].valor=c[i].valor;
    }
    else
        a[i][j].valor=c[i].valor;

    printf("\n******");
    printf("\n>>COMPROVANTE DE PASSAGEM<<\n\n");
    printf("NOME -> %s\n",a[i][j].nome);
    printf("CPF -> %s\n",a[i][j].cpf);
    printf("ORIGEM -> %s\n",c[i].origem);
    printf("DESTINO -> %s\n",c[i].destino);
    printf("DATA E HORÁRIO DA VIAGEM -> %.2d/%.2d/%d ÁS %.2f\n",c[i].dia,c[i].mes,c[i].ano,c[i].hora);
    printf("AVIÃO [%d] ,POLTRONA -> %d\n",i+1,a[i][j].polt);
    printf("DATA DE COMPRA DA PASSAGEM -> %.2d/%.2d/%d\n",a[i][j].data.dia_p,a[i][j].data.mes_p,a[i][j].data.ano_p);
    printf("VALOR DA PASSAGEM -> R$%.2f\n",c[i].valor);
    printf("VALOR A SER PAGO -> R$%.2f\n",a[i][j].valor);
    printf("****");
}
///----------------------------------------///
int main()
{
    setlocale(LC_ALL,"");

    registro_voo x[5];
    passagem y [5][180];

    int i,j,opc,sub_opc,num_voo,aux=0;
    char origem_voo[50],destino_voo[50];
///---------------------------------------------------------------------------------------///
    for(i=0; i<AV; i++) ///FOR RESPONSÁVEL PARA O REGISTRO DE DADOS DE TODOS OS AVIÕES
    {
        x[i].cap=180;
        x[i].ind=0;
        printf("\n\nAVIÃO [%d]\n",i+1);

        printf("\nA QUANTIDADE DE LUGARES DISPONÍVEIS: %d \n",x[i].cap);
        printf("\nINFORME O NÚMERO DO VOO: ");
        scanf("%d",&x[i].num);
        fflush(stdin);
        printf("INFORME A ORIGEM DO VOO: ");
        gets(x[i].origem);
        for(j=0; x[i].origem[j]!='\0'; j++)
            x[i].origem[j]=toupper(x[i].origem[j]);

        printf("INFORME O DESTINO DO VOO: ");
        gets(x[i].destino);
        for(j=0; x[i].destino[j]!='\0'; j++)
            x[i].destino[j]=toupper(x[i].destino[j]);

        printf("INFORME A DATA DA VIAGEM (dd/mm/aaaa): ");
        scanf("%d/%d/%d",&x[i].dia,&x[i].mes,&x[i].ano);
        printf("INFORME O HORÁRIO DA VIAGEM (hh,mm): ");
        scanf("%f",&x[i].hora);
        printf("INFORME O VALOR DA PASSAGEM (R$): ");
        scanf("%f",&x[i].valor);
    }
///---------------------------------------------------------------------------------------///
    do
    {
        ///UTILIZADO A ESTRUTURA DE REPETIÇÃO "DO WHILE" PARA CONTROLAR O MENU E AS OPÇÕES DE VOO
        printf("\n\n---MENU---\n");     ///ENQUANTO A OPÇÃO ESCOLHIDA FOR DIFERENTE DE 3, O PROGRAMA FICARÁ EM LOOP INFINITO.
        printf("\n 1- CONSULTAR\n");
        printf(" 2- EFETUAR RESERVA\n");
        printf(" 3- SAIR\n\n");
        printf("ESCOLHA: ");
        scanf("%d",&opc);

        switch(opc)     ///UTILIZADO O SWITCH CASE PARA CONTROLE DAS SUBOPÇÕES DIGITADAS, CONSULTAR E EFETUAR RESERVA.
        {
        case 1:
            aux=0;
            printf("\n\n---SUBMENU---\n");
            printf("\n 1- POR NÚMERO DE VOO\n");
            printf(" 2- POR ORIGEM\n");
            printf(" 3- POR DESTINO\n\n");
            printf("ESCOLHA: ");
            scanf("%d",&sub_opc);

            if(sub_opc==1)
            {
                printf("\nINFORME O NÚMERO DO VOO: ");
                scanf("%d",&num_voo);
                for(i=0; i<AV; i++)
                {
                    if(num_voo==x[i].num)       ///LÓGICA UTILIZADA PARA REALIZAR A BUSCA ATRAVÉS DO NÚMERO DE VOO
                    {
                        printf("\nORIGEM DO VOO -- %s ",x[i].origem);
                        printf("\nDESTINO DO VOO -- %s ",x[i].destino);
                        printf("\nDATA DA VIAGEM -- %d/%d/%d",x[i].dia,x[i].mes,x[i].ano);
                        printf("\nHORÁRIO DA VIAGEM -- %.2f",x[i].hora);
                        printf("\nVALOR DA PASSAGEM -- R$%.2f\n",x[i].valor);
                        aux=1;
                    }
                    else if(aux==0&&i==AV-1)
                        printf("\nO VOO INFORMADO NÃO EXISTE!\n");
                }
            }
            else if(sub_opc==2)
            {
                printf("\nINFORME A ORIGEM DO VOO: ");
                fflush(stdin);
                gets(origem_voo);

                for(i=0; origem_voo[i]!='\0'; i++)
                    origem_voo[i]=toupper(origem_voo[i]);

                for(i=0; i<AV; i++)
                {
                    if(strcmp(origem_voo,x[i].origem)==0)       ///LÓGICA UTILIZADA PARA REALIZAR A BUSCA ATRAVÉS DA ORIGEM
                    {
                        printf("\nNÚMERO DO VOO -- %d ",x[i].num);
                        printf("\nDESTINO DO VOO -- %s ",x[i].destino);
                        printf("\nDATA DA VIAGEM -- %d/%d/%d",x[i].dia,x[i].mes,x[i].ano);
                        printf("\nHORÁRIO DA VIAGEM -- %.2f",x[i].hora);
                        printf("\nVALOR DA PASSAGEM -- R$%.2f\n",x[i].valor);
                        aux=1;
                    }
                    else if(aux==0&&i==AV-1)
                        printf("\nO VOO INFORMADO NÃO EXISTE!\n");
                }
            }
            else if(sub_opc==3)
            {
                printf("\nINFORME O DESTINO DO VOO: ");
                fflush(stdin);
                gets(destino_voo);

                for(i=0; destino_voo[i]!='\0'; i++)
                    destino_voo[i]=toupper(destino_voo[i]);

                for(i=0; i<AV; i++)
                {
                    if(strcmp(destino_voo,x[i].destino)==0)     ///LÓGICA UTILIZADA PARA REALIZAR A BUSCA ATRAVÉS DO DESTINO
                    {
                        printf("\nNÚMERO DO VOO -- %d ",x[i].num);
                        printf("\nORIGEM DO VOO -- %s ",x[i].origem);
                        printf("\nDATA DA VIAGEM -- %d/%d/%d",x[i].dia,x[i].mes,x[i].ano);
                        printf("\nHORÁRIO DA VIAGEM -- %.2f",x[i].hora);
                        printf("\nVALOR DA PASSAGEM -- R$%.2f\n",x[i].valor);
                        aux=1;
                    }
                    else if(aux==0&&i==AV-1)
                        printf("\nO VOO INFORMADO NÃO EXISTE!\n");
                }
            }
            break;

        case 2:
            aux=0;
            printf("\n\n---SUBMENU---\n");
            printf("\n INFORME O NÚMERO DO VOO QUE DESEJA EMBARCAR!!\n\n");
            printf("ESCOLHA: ");
            scanf("%d",&num_voo);

            int i1=0,i2=0;

            for(i=0; i<AV; i++)
            {
                if(num_voo==x[i].num)   ///LÓGICA UTILIZADA PARA EFETUAR A RESERVA DE PASSAGENS.
                {
                    aux=1;
                    if(x[i].cap>0)
                    {
                        x[i].cap--;
                        printf("\nRESERVA CONFIRMADA!!\n");
                        printf("\nINFORME O NOME: ");
                        fflush(stdin);
                        gets(y[i][ x[i].ind ].nome);
                        printf("INFORME O CPF: ");
                        gets(y[i][ x[i].ind ].cpf);
                        y[i][ x[i].ind ].polt = x[i].ind+1;
                        printf("INFORME A DATA DA COMPRA: ");
                        scanf("%d/%d/%d",&y[i][x[i].ind].data.dia_p,&y[i][x[i].ind].data.mes_p,&y[i][x[i].ind].data.ano_p);


                        while((y[i][x[i].ind].data.mes_p>x[i].mes&&y[i][x[i].ind].data.ano_p>x[i].ano)||(y[i][x[i].ind].data.ano_p>x[i].ano)||(y[i][x[i].ind].data.dia_p>x[i].dia&&y[i][x[i].ind].data.mes_p==x[i].mes&&y[i][x[i].ind].data.ano_p==x[i].ano)||(y[i][x[i].ind].data.ano_p==x[i].ano&&y[i][x[i].ind].data.mes_p>x[i].mes))
                        {
                            printf("\nDATA INVÁLIDA!! POR FAVOR, INFORME NOVAMENTE!\n\n");
                            printf("INFORME A DATA DA COMPRA: ");
                            scanf("%d/%d/%d",&y[i][x[i].ind].data.dia_p,&y[i][x[i].ind].data.mes_p,&y[i][x[i].ind].data.ano_p);
                        }
                        i1=i;
                        i2=x[i].ind;
                        calc(y,5,i1,i2,x,5);
                        x[i].ind++;
                    }
                    else
                        printf("\nVOO LOTADO");
                }
                else if(aux==0&&i==AV-1)
                    printf("\nVOO INEXISTENTE");
            }
        }
    }
    while(opc!=3);
///---------------------------------------------------------------------------------------///
    printf("\nFIM =)\n");

    return 0;
}
