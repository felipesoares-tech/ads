#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///6. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

int main()
{

    setlocale(LC_ALL,"");

    int vet[10],cont=0;

    for(int i=0; i<10; i++)
    {
        printf("DIGITE O %dº VALOR: ",i+1);
        scanf("%d",&vet[i]);

        if(vet[i]%2 == 0)
            cont++;

    }

    printf("\nO VETOR INFORMADO POSSUI %d VALORES PARES!!\n",cont);



    return 0;
}
