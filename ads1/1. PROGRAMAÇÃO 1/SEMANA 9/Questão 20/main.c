#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////QUEST�O 20///////////
int main()
{
    setlocale(LC_ALL,"");

    int n,cont,qtd,soma,maior,menor,soma_pares,cont2,cont3;
    float porc,med_pares,med;


    n=-1;
    cont=0;
    cont2=0;
    soma=0;
    maior=0;
    cont3=0;
    soma_pares=0;

    while(n!=0)
    {
        cont++;
        printf("DIGITE UM N�MERO -> ");
        scanf("%d", &n);

        soma = soma + n;

        if(n!=0)
        {

            if(n>maior)
                maior = n;

            if(n<menor)
                menor = n;


            if(n%2 == 0)
            {
                soma_pares = soma_pares + n;
                cont2++;

            }
            else if(n%2 != 0)
                cont3++;

        }

    }

    qtd=cont-1;
    med = soma/qtd*1.00;
    med_pares = soma_pares/cont2*1.00;
    porc = (cont3/(qtd*1.00))*100.00;

    printf("\nSOMA DOS N�MEROS DIGITADOS -> %d",soma);
    printf("\nQUANTIDADE DE N�MEROS DIGITADOS -> %d", qtd);
    printf("\nM�DIA DOS N�MEROS DIGITADOS -> %.2f", med);
    printf("\nO MAIOR N�MERO -> %d", maior);
    printf("\nO MENOR N�MERO -> %d", menor);
    printf("\nM�DIA DOS N�MEROS PARES -> %.2f", med_pares);
    printf("\nPORCENTAGEM DOS N�MEROS �MPARES -> %.2f%%", porc);

    return 0;
}
