#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 35

char gabarito[20][2];
///REFERENTE AO GABARITO, IREMOS UTILIZÁ-LO DE MANEIRA GLOBAL, ONDE O USUÁRIO
///IRÁ DIGITÁ-LO, TENDO EM VISTA QUE SERÁ UTILIZADO PARA TODAS AS PROVAS.
///********************************************************************************///
typedef struct                                   ///REFERENTE A QUESTÃO #1.......:::
{                                               ///ESTRUTURA E VARIÁVEIS NECESSÁRIAS
    char rua[50],bairro[50],cidade[50],estado[50];
    int num, cep;
}endereco;
///********************************************************************************///
typedef struct                                   ///REFERENTE A QUESTÃO #1.......:::
{                                               ///ESTRUTURA E VARIÁVEIS NECESSÁRIAS
    char nome[50];
    int ra;
    float nota;
    float med;
    char resp[20][2];
    endereco end;
}cadastro;
///********************************************************************************///
void func(cadastro *y,int n)        ///REFERENTE A QUESTÃO #4.................:::
{                                  ///FUNÇÃO CRIADA PARA CALCULAR NOTA E TAMBÉM
    int i,j;                      ///APROVEITADA PARA REALIZAR O CÁLCULO DE MÉDIA
                                 ///INDIVIDUAL DE CADA ALUNO!!
    for(i=0; i<TAM; i++)
    {
        for(j=0; j<3; j++)
        {
            if(strcmp(gabarito[j],y[i].resp[j])==0)
                y[i].nota = y[i].nota + 0.5;
        }
    }
    for(i=0; i<TAM; i++)    ///CÁLCULO DE MÉDIA INDIVIDUAL
        y[i].med = y[i].nota/20.00;
}
///********************************************************************************///
void insertion(cadastro *vet, int n)   ///REFERENTE A QUESTÃO #5.........:::
{                                     ///FUNÇÃO CRIADA PARA ORDENAR DE FORMA
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
float media_geral(cadastro *vet, int n)     ///REFERENTE A QUESTÃO #6.................:::
{                                          ///FUNÇÃO CRIADA PARA O CÁLCULO DA MÉDIA GERAL
    int i;                                /// MÉDIA DA TURMA INTEIRA.
    float med=0;

    for(i=0; i<TAM; i++)
        med = med + vet[i].nota;

    med = med/(TAM*1.00);

    return med;
}
///********************************************************************************///
float maior_nota(cadastro *vet, int n)      ///REFERENTE A QUESTÃO #7..............:::
{                                          ///FUNÇÃO CRIADA PARA CÁLCULO DA MAIOR NOTA
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
float menor_nota(cadastro *vet, int n)      ///REFERENTE A QUESTÃO #8..............:::
{                                          ///FUNÇÃO CRIADA PARA CÁLCULO DA MENOR NOTA
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
float percentual(cadastro *vet, int n)       ///REFERENTE A QUESTÃO #9...............:::
{                                           ///FUNÇÃO CRIADA PARA CALCULAR A PORCENTAGEM
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
void maior_nota2(cadastro *vet, int n)      ///REFERENTE A QUESTÃO #10..............:::
{                                          ///FUNÇÃO CRIADA PARA MOSTRAR OS DADOS DO ALUNO COM MAIOR NOTA
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
int main()              ///DECLARAÇÃO DE VARIÁVEIS
{
    setlocale(LC_ALL,"");
    int i,j;
    cadastro x[35];
///===============================================================================///
    printf("GABARITO DA AVALIAÇÃO!!\n\n");      ///AQUI SERÁ INSERIDO O GABARITO
                                               ///DA PROVA, LEMBRANDO QUE SERÁ UM
    for(i=0; i<20; i++)                        ///GABARITO, PARA TODAS AS PROVAS.
    {
        printf("QUESTÃO [%d] -> ",i+1);
        gets(gabarito[i]);
    }
    printf("\n");                                       ///FAZ PARTE DA QUESTÃO #2
///===============================================================================///
    for(i=0; i<TAM; i++)                    ///LEITURA DE TODOS OS DADOS REFERENTE AOS
    {                                      ///35 ALUNOS.......          QUESTÃO #2
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

        printf("\nRESPOSTAS REFERENTE A AVALIAÇÃO:\n\n");

        for(j=0; j<20; j++) ///--------> #3
        {
            printf("QUESTAO [%d] = ",j+1);
            fflush(stdin);
            gets(x[i].resp[j]);
        }
        printf("\n");
    }
///===============================================================================///
    func(x,35); /// QUESTÃO #4
    insertion(x,TAM); /// QUESTÃO #5

    printf("MÉDIA DA TURMA = %.2f\n",media_geral(x,TAM)); /// QUESTÃO #6
    printf("MAIOR NOTA DA TURMA = %.2f\n",maior_nota(x,TAM)); /// QUESTÃO #7
    printf("MENOR NOTA DA TURMA = %.2f\n",menor_nota(x,TAM)); /// QUESTÃO #8
    printf("PERCENTUAL DE ALUNOS APROVADOS = %.2f%%\n\n",percentual(x,TAM));/// QUESTÃO #9
    maior_nota2(x,TAM);/// QUESTÃO #10

    return 0;
}
