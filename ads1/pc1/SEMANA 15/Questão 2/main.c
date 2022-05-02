#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 50
//////////////////////////////////////QUESTÃO-2///////////////////////////////////////////
typedef struct
{
    float sal;
    int id,nflh;
    char sex;
} reg;

int main()
{
    setlocale(LC_ALL,"");

    reg x[50];
    int i,j,acm_flh=0,cont=0,med2,cont2=0;
    float acm_sal=0,med;

    for(i=0; i<TAM; i++)
    {
        printf("\nHABITANTE %d\n\n",i+1);

        printf("SEXO (M OU F) -> ");
        fflush(stdin);
        x[i].sex = getchar();

        printf("SALÁRIO -> R$");
        scanf("%f",&x[i].sal);

        printf("IDADE -> ");
        scanf("%d",&x[i].id);

        printf("NÚMERO DE FILHOS -> ");
        scanf("%d",&x[i].nflh);

        acm_sal = acm_sal + x[i].sal;
        acm_flh = acm_flh + x[i].nflh;

        if(x[i].sex == 'F' || x[i].sex == 'f')
            if(x[i].sal>1000)
                cont++;
    }

    med = acm_sal/TAM;
    med2 = acm_flh/TAM;

    printf("\n\nMÉDIA DE SALÁRIO DA POPULAÇÃO = R$%.2f\n",med);
    printf("MÉDIA DE FILHOS DA POPULAÇÃO = %d\n\n",med2);

    printf("MAIOR SALÁRIO\n\n");

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
          if(x[i].sal > x[j].sal)
          cont2++;

        }
        if(cont2 == (TAM-1)){
            printf("%.2f",x[i].sal);
            cont2=0;
        }else
        cont2=0;

    }

    float perc;

    perc = cont/50.00;

    printf("\n\nPERCENTUAL DE MULHERES COM SALÁRIO SUPERIOR A 1k = %.2f%%",perc*100);


    return 0;
}
