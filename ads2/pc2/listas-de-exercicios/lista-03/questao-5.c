#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///5. Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa
///deverá fazer uma busca do valor de X no vetor lido e informar a posição em que foi
///encontrado ou se não foi encontrado.

int main()
{

    setlocale(LC_ALL,"");

    int vet[20];
    int x,z=0;

    for(int i=0; i<20; i++)
    {
        printf("INFORME O %d° VALOR: ", i+1);
        scanf("%d",&vet[i]);
    }

    printf("\nINFORME UM VALOR A SER BUSCADO: ");
    scanf("%d",&x);

    for(int i=0; i<20; i++)
    {
        if(vet[i] == x)
        {
            printf("\nNÚMERO ENCONTRADO!! POSIÇÃO %d\n",i);
            z=1;
        }else if(i == 19 && z == 0)
            printf("\nO NÚMERO INFORMADO NÃO FOI ENCONTRADO!\n");

    }

    return 0;
}
