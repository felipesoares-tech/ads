#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///4. Crie um programa que solicite a entrada de 10 n�meros pelo usu�rio,
///armazenando-os em um vetor, e ent�o monte outro vetor com os valores do primeiro
///multiplicados por 5. Exiba os valores dos dois vetores na tela, simultaneamente, em
///duas colunas (um em cada coluna), uma posi��o por linha.

int main()
{

    setlocale(LC_ALL,"");

    int vet[10];
    int vet2[10];

    for(int i=0; i<10; i++)
    {
        printf("INFORME O %d� N�MERO: ",i+1);
        scanf("%d",&vet[i]);

        vet2[i] = vet[i]*5;
    }

    printf("\nVALORES RESPECTIVOS,VETOR 1/VETOR 2:\n\n");

    for(int i=0; i<10; i++)
        printf("%d %d\n",vet[i],vet2[i]);



    return 0;
}
