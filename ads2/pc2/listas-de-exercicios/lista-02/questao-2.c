#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-2/////////////////
int main()
{

    setlocale(LC_ALL,"");

    int x;

    printf("INFORME O DIA DA SEMANA (1,2,3,4,5,6,7): ");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("DOMINGO");
        break;
    case 2:
        printf("SEGUNDA-FEIRA");
        break;
    case 3:
        printf("TERÇA-FEIRA");
        break;
    case 4:
        printf("QUARTA-FEIRA");
        break;
    case 5:
        printf("QUINTA-FEIRA");
        break;
    case 6:
        printf("SEXTA-FEIRA");
        break;
    case 7:
        printf("SÁBADO");
        break;

    }

    return 0;
}
