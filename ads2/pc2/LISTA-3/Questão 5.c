#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///5. Leia um vetor de 20 posi��es e em seguida um valor X qualquer. Seu programa
///dever� fazer uma busca do valor de X no vetor lido e informar a posi��o em que foi
///encontrado ou se n�o foi encontrado.

int main()
{

    setlocale(LC_ALL,"");

    int vet[20];
    int x,z=0;

    for(int i=0; i<20; i++)
    {
        printf("INFORME O %d� VALOR: ", i+1);
        scanf("%d",&vet[i]);
    }

    printf("\nINFORME UM VALOR A SER BUSCADO: ");
    scanf("%d",&x);

    for(int i=0; i<20; i++)
    {
        if(vet[i] == x)
        {
            printf("\nN�MERO ENCONTRADO!! POSI��O %d\n",i);
            z=1;
        }else if(i == 19 && z == 0)
            printf("\nO N�MERO INFORMADO N�O FOI ENCONTRADO!\n");

    }

    return 0;
}
