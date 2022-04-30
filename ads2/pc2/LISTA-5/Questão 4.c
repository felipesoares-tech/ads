#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///4. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
///colunas. Imprima o endereço de cada posição dessa matriz.

int main ()
{
    setlocale(LC_ALL,"");

    float mat[3][3],*pmat;

    pmat=&mat[3][3];

    for(int i=0; i<3; i++,pmat++)
        for(int j=0; j<3; j++,pmat++)
            printf("%p\n",pmat);

    return 0;
}
