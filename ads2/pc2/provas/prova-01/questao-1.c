#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[50],ra[12];

} dados;



void InverterString(dados *pont)
{
    int aux=strlen(pont->nome);

    aux--;

    for(int i=aux; i>-1; i--)
        printf("%c",pont->nome[i-1]);

}


void conv(dados *pont)
{
    int vet[11];

    for(int i=0; pont->ra[i]; pont->ra[i]++,i++)
        vet[i] = (int)pont->ra[i]-48; //realizado uma conversão direta utilizando cast para converter para inteiro

    if(vet[10]%2 == 0) //se o resto da divisão do último da matricula por 2 for 0, logo o número é par
        printf("\nA MATRICULA INFORMADA É PAR!!\n");
    else
        printf("\nA MATRICULA INFORMADA É ÍMPAR!!\n");

}

int main ()
{
    setlocale(LC_ALL,"");

    dados registro,*pont_r=&registro;

    printf("INFORME O NOME: ");
    fgets(pont_r->nome,50,stdin);

    printf("INFORME A MATRICULA: ");
    fgets(pont_r->ra,50,stdin);

    conv(pont_r);
    InverterString(pont_r);



    return 0;
}
