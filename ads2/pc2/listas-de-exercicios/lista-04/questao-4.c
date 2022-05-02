#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///4. Faça um programa que tenha um procedimento (“função” sem retorno) que
///seja capaz de receber três diferentes valores em reais parâmetros e os converta
///para dólar R$ 2,0357, Euro R$ 2,7149 e Libra R$ 3,2722. Utilize passagem por referência.

void conv(float *a, float *b, float *c)
{
    float cot[3]= {2.0357,2.7149,3.2722}; ///VETOR CRIADO SOMENTE PARA ARMAZENAR O VALOR DE CADA CONVERSÃO

    for(int i=1; i<4; i++) ///COMO O PRIMEIRO ÍNDICE SERÁ PARA ARMAZENAR OS VALORES DE ENTRADA, ENTÃO IREMOS ARMAZENAR
        ///AS CONVERSÕES NOS OUTROS 3 ESPAÇOS, SENDO ASSIM, COMEÇAREMOS GRAVAR A PARTIR DA POSIÇÃO NÚMERO 1.
    {
        a[i]=a[0]/cot[i-1];
        b[i]=b[0]/cot[i-1];
        c[i]=c[0]/cot[i-1];
    }
}

int main()
{
    setlocale(LC_ALL,"");
    char nome[3][6]= {"DÓLAR","EURO","LIBRA"};
    float x[4],y[4],z[4]; ///VETORES ONDE SERÃO ARMAZENADOS OS VALORES DIGITADOS PELO USUÁRIO, E TAMBÉM AS CONVERSÕES
    ///NESTE CASO, O VALOR QUE O USUÁRIO DIGITAR FICARÁ ARMAZENADO NA PRIMEIRA POSIÇÃO DO VETOR.
    float *p1 = x; ///PONTEIRO 1 APONTA PARA X
    float *p2 = y; ///PONTEIRO 2 APONTA PARA Y
    float *p3 = z; ///PONTEIRO 3 APONTA PARA Z

    printf("INFORME O PRIMEIRO VALOR: ");
    scanf("%f",&x[0]); ///ARMAZENANDO VALORES NA PRIMEIRA POSIÇÃO DO VETOR

    printf("INFORME O SEGUNDO VALOR: ");
    scanf("%f",&y[0]);

    printf("INFORME O TERCEIRO VALOR: ");
    scanf("%f",&z[0]);

    conv(p1,p2,p3); ///CHAMADA A FUNÇÃO DE CONVERSÃO, ONDE É PASSADO O ENDEREÇO DE X,Y e Z, E CONSEQUENTEMENTE OS SEUS VALORES.

    printf("\nVALOR 1 -> R$%.2f\n\n>>CONVERSÕES<<\n",x[0]);
    for(int i=1; i<4; i++)
        printf("(%s)=%.2f\n",nome[i-1],x[i]);

    printf("\nVALOR 2 -> R$%.2f\n\n>>CONVERSÕES<<\n",y[0]);
    for(int i=1; i<4; i++)
        printf("(%s)=%.2f\n",nome[i-1],y[i]);

    printf("\nVALOR 3 -> R$%.2f\n\n>>CONVERSÕES<<\n",z[0]);
    for(int i=1; i<4; i++)
        printf("(%s)=%.2f\n",nome[i-1],z[i]);

    return 0;
}
