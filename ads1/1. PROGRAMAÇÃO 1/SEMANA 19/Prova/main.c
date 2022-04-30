#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 35

char gabarito[20][2];
///REFERENTE AO GABARITO, IREMOS UTILIZ�-LO DE MANEIRA GLOBAL, ONDE O USU�RIO
///IR� DIGIT�-LO, TENDO EM VISTA QUE SER� UTILIZADO PARA TODAS AS PROVAS.
///********************************************************************************///
typedef struct                                   ///REFERENTE A QUEST�O #1.......:::
{                                               ///ESTRUTURA E VARI�VEIS NECESS�RIAS
    char rua[50],bairro[50],cidade[50],estado[50];
    int num, cep;
}endereco;
///********************************************************************************///
typedef struct                                   ///REFERENTE A QUEST�O #1.......:::
{                                               ///ESTRUTURA E VARI�VEIS NECESS�RIAS
    char nome[50];
    int ra;
    float nota;
    float med;
    char resp[20][2];
    endereco end;
}cadastro;
///********************************************************************************///
void func(cadastro *y,int n)        ///REFERENTE A QUEST�O #4.................:::
{                                  ///FUN��O CRIADA PARA CALCULAR NOTA E TAMB�M
    int i,j;                      ///APROVEITADA PARA REALIZAR O C�LCULO DE M�DIA
                                 ///INDIVIDUAL DE CADA ALUNO!!
    for(i=0; i<TAM; i++)
    {
        for(j=0; j<3; j++)
        {
            if(strcmp(gabarito[j],y[i].resp[j])==0)
                y[i].nota = y[i].nota + 0.5;
        }
    }
    for(i=0; i<TAM; i++)    ///C�LCULO DE M�DIA INDIVIDUAL
        y[i].med = y[i].nota/20.00;
}
///********************************************************************************///
void insertion(cadastro *vet, int n)   ///REFERENTE A QUEST�O #5.........:::
{                                     ///FUN��O CRIADA PARA ORDENAR DE FORMA
    int a,b;                         ///CRESCENTE TODAS AS NOTAS OBTIDAS.
    cadastro aux;
    for (a=0; a<n; a++)
    {
        for (b=a; b>0; b--)
        {
            if(vet[b].nota < vet[b-1].nota)
            {
                aux = vet[b];
                vet[b] = vet[b-1];
                vet[b-1] = aux;
            }
            else
                break;
        }
    }
}
///********************************************************************************///
float media_geral(cadastro *vet, int n)     ///REFERENTE A QUEST�O #6.................:::
{                                          ///FUN��O CRIADA PARA O C�LCULO DA M�DIA GERAL
    int i;                                /// M�DIA DA TURMA INTEIRA.
    float med=0;

    for(i=0; i<TAM; i++)
        med = med + vet[i].nota;

    med = med/(TAM*1.00);

    return med;
}
///********************************************************************************///
float maior_nota(cadastro *vet, int n)      ///REFERENTE A QUEST�O #7..............:::
{                                          ///FUN��O CRIADA PARA C�LCULO DA MAIOR NOTA
    int i,j,x=0;
    float maior;

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            if(vet[i].nota >= vet[j].nota)
                x++;
        }
        if(x == TAM)
            maior = vet[i].nota;
        else
            x=0;
    }

    return maior;
}
///********************************************************************************///
float menor_nota(cadastro *vet, int n)      ///REFERENTE A QUEST�O #8..............:::
{                                          ///FUN��O CRIADA PARA C�LCULO DA MENOR NOTA
    int i,j,x=0;
    float menor;

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            if(vet[i].nota <= vet[j].nota)
                x++;
        }
        if(x == TAM)
            menor = vet[i].nota;
        else
            x=0;
    }

    return menor;
}
///********************************************************************************///
float percentual(cadastro *vet, int n)       ///REFERENTE A QUEST�O #9...............:::
{                                           ///FUN��O CRIADA PARA CALCULAR A PORCENTAGEM
    int i;                                 /// DE ALUNOS APROVADOS NA TURMA (NOTA>6).
    float x=0;

    for(i=0; i<TAM; i++)
    {
        if(vet[i].nota>=6.0)
            x++;
    }

    x = (x/TAM)*100.00;

    return x;
}
///********************************************************************************///
void maior_nota2(cadastro *vet, int n)      ///REFERENTE A QUEST�O #10..............:::
{                                          ///FUN��O CRIADA PARA MOSTRAR OS DADOS DO ALUNO COM MAIOR NOTA
    int i,j,x=0;
    float maior;

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            if(vet[i].nota >= vet[j].nota)
                x++;
        }
        if(x == TAM)
        {

        maior = vet[i].nota;

        printf("NOME DO ALUNO = %s \n",vet[i].nome);
        printf("RA DO ALUNO = %d \n",vet[i].ra);
        printf("CIDADE = %s \n",vet[i].end.cidade);
        printf("ESTADO = %s\n",vet[i].end.estado);
        printf("RUA = %s\n",vet[i].end.rua);
        printf("BAIRRO = %s\n",vet[i].end.bairro);
        printf("NOTA = %.2f\n\n",maior);

        }else
            x=0;
    }
}
///********************************************************************************///
int main()              ///DECLARA��O DE VARI�VEIS
{
    setlocale(LC_ALL,"");
    int i,j;
    cadastro x[35];
///===============================================================================///
    printf("GABARITO DA AVALIA��O!!\n\n");      ///AQUI SER� INSERIDO O GABARITO
                                               ///DA PROVA, LEMBRANDO QUE SER� UM
    for(i=0; i<20; i++)                        ///GABARITO, PARA TODAS AS PROVAS.
    {
        printf("QUEST�O [%d] -> ",i+1);
        gets(gabarito[i]);
    }
    printf("\n");                                       ///FAZ PARTE DA QUEST�O #2
///===============================================================================///
    for(i=0; i<TAM; i++)                    ///LEITURA DE TODOS OS DADOS REFERENTE AOS
    {                                      ///35 ALUNOS.......          QUEST�O #2
        x[i].nota = 0;
        printf("NOME DO ALUNO [%d] -> ",i+1);
        fflush(stdin);
        gets(x[i].nome);

        printf("DIGITE O RA DO ALUNO -> ");
        scanf("%d",&x[i].ra);

        printf("CIDADE -> ");
        fflush(stdin);
        gets(x[i].end.cidade);

        printf("ESTADO -> ");
        fflush(stdin);
        gets(x[i].end.estado);

        printf("RUA -> ");
        fflush(stdin);
        gets(x[i].end.rua);

        printf("BAIRRO -> ");
        fflush(stdin);
        gets(x[i].end.bairro);

        printf("\nRESPOSTAS REFERENTE A AVALIA��O:\n\n");

        for(j=0; j<20; j++) ///--------> #3
        {
            printf("QUESTAO [%d] = ",j+1);
            fflush(stdin);
            gets(x[i].resp[j]);
        }
        printf("\n");
    }
///===============================================================================///
    func(x,35); /// QUEST�O #4
    insertion(x,TAM); /// QUEST�O #5

    printf("M�DIA DA TURMA = %.2f\n",media_geral(x,TAM)); /// QUEST�O #6
    printf("MAIOR NOTA DA TURMA = %.2f\n",maior_nota(x,TAM)); /// QUEST�O #7
    printf("MENOR NOTA DA TURMA = %.2f\n",menor_nota(x,TAM)); /// QUEST�O #8
    printf("PERCENTUAL DE ALUNOS APROVADOS = %.2f%%\n\n",percentual(x,TAM));/// QUEST�O #9
    maior_nota2(x,TAM);/// QUEST�O #10

    return 0;
}
