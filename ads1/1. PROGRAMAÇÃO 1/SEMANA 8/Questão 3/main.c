#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////////QUESTÃO 3//////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int idade,gotas;
    float peso;

    printf("INFORME A SUA IDADE -> ");
    scanf("%d", &idade);

    printf("INFORME O SEU PESO -> ");
    scanf("%f", &peso);

    if (idade >= 12 && peso >= 60)  //1000mg
        gotas = (1000*20)/500;
    else if (idade >= 12 && peso < 60) //875mg
        gotas = (875*20)/500;
    else if(idade < 12)
        if (peso >= 5 && peso <= 8.99) //125mg
            gotas = (125*20)/500;
        else if (peso >= 9 && peso <=15.99)  //250mg
            gotas = (250*20)/500;
        else if(peso >= 16 && peso <= 24.99)  //375mg
            gotas = (375*20)/500;
        else if(peso >= 24 && peso <= 29.99)  //500mg
            gotas = (500*20)/500;
        else if (peso > 30)
            gotas = (750*20)/500; //750mg


    printf("\nQUANTIDADE DE GOTAS = %d\n",gotas);

    return 0;
}
