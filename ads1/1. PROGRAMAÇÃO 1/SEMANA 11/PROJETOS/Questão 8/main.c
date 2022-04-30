#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
////////////////////////////////QUESTÃO-8////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    char elev,periodo;
    int cont;
    int cont_elev_a,cont_elev_b,cont_elev_c;
    int cont_periodo_m,cont_periodo_v,cont_periodo_n;
    char maior_elev,maior_periodo;
    char maior_periodo_todos;
    float diferenca,percentual_med,percentual_maior,percentual_menor;
    int mais_usado,menos_usado,medio;

    cont = 1;
    cont_elev_a = 0;
    cont_elev_b = 0;
    cont_elev_c = 0;
    cont_periodo_m = 0;
    cont_periodo_v = 0;
    cont_periodo_n = 0;

    do
    {
        printf("QUAL ELEVADOR VOCÊ UTILIZA COM MAIS FREQUÊNCIA ?\n\n");
        printf("ELEVADOR ::: (A)\n");
        printf("ELEVADOR ::: (B)\n");
        printf("ELEVADOR ::: (C)\n\n");

        printf("RESPOSTA --> ");
        scanf("%c%*c",&elev);

        printf("\nEM QUAL PERÍODO VOCÊ UTILIZA O ELEVADOR ?\n\n");
        printf("MATUTINO ::::: (M)\n");
        printf("VERSPETINO ::: (V)\n");
        printf("NOTURNO :::::: (N)\n\n");

        printf("RESPOSTA --> ");
        scanf("%c%*c",&periodo);

        switch(elev)
        {

        case 'A':
            cont_elev_a++;
            break;
        case 'B':
            cont_elev_b++;
            break;
        case 'C':
            cont_elev_c++;
            break;
        }

        switch(periodo)
        {

        case 'M':
            cont_periodo_m++;
            break;
        case 'V':
            cont_periodo_v++;
            break;
        case 'N':
            cont_periodo_n++;
            break;
        }

        if(elev == 'A' && cont_elev_a > cont_elev_b && cont_elev_a > cont_elev_c)
        {
            maior_elev = 'A';
            if(cont_periodo_m > cont_periodo_n && cont_periodo_m > cont_periodo_v)
                maior_periodo = 'M';
            else if (cont_periodo_n > cont_periodo_m && cont_periodo_n > cont_periodo_v)
                maior_periodo = 'N';
            else if (cont_periodo_v > cont_periodo_n && cont_periodo_v > cont_periodo_m)
                maior_periodo = 'V';
        }
        if(elev == 'B' && cont_elev_b > cont_elev_a && cont_elev_b > cont_elev_c)
        {
            maior_elev = 'B';
            if(cont_periodo_m > cont_periodo_n && cont_periodo_m > cont_periodo_v)
                maior_periodo = 'M';
            else if (cont_periodo_n > cont_periodo_m && cont_periodo_n > cont_periodo_v)
                maior_periodo = 'N';
            else if (cont_periodo_v > cont_periodo_n && cont_periodo_v > cont_periodo_m)
                maior_periodo = 'V';
        }

        if(elev == 'C' && cont_elev_c > cont_elev_a && cont_elev_c > cont_elev_b)
        {
            maior_elev = 'C';
            if(cont_periodo_m > cont_periodo_n && cont_periodo_m > cont_periodo_v)
                maior_periodo = 'M';
            else if (cont_periodo_n > cont_periodo_m && cont_periodo_n > cont_periodo_v)
                maior_periodo = 'N';
            else if (cont_periodo_v > cont_periodo_n && cont_periodo_v > cont_periodo_m)
                maior_periodo = 'V';
        }

    cont++;
    }while(cont<=50);

    if(cont_periodo_m > cont_periodo_n && cont_periodo_m > cont_periodo_v)
    {
        maior_periodo_todos = 'M';
        mais_usado = cont_periodo_m;

        if(cont_periodo_v<cont_periodo_n)
            menos_usado = cont_periodo_v;
            else if (cont_periodo_n<cont_periodo_v)
         menos_usado = cont_periodo_n;

    }
    else
    {
        if(cont_periodo_n > cont_periodo_m && cont_periodo_n > cont_periodo_v)
        {
            maior_periodo_todos = 'N';
            mais_usado = cont_periodo_n;

            if(cont_periodo_v<cont_periodo_m)
            menos_usado = cont_periodo_v;
            else if (cont_periodo_m<cont_periodo_v)
         menos_usado = cont_periodo_m;
        }
        else
        {
            if(cont_periodo_v > cont_periodo_m && cont_periodo_v > cont_periodo_n)
            {
                maior_periodo_todos = 'V';
                mais_usado = cont_periodo_v;

                if(cont_periodo_m<cont_periodo_n)
            menos_usado = cont_periodo_m;
            else if (cont_periodo_n<cont_periodo_m)
         menos_usado = cont_periodo_n;
            }
        }
    }

    if (maior_elev == 'A' && cont_elev_c > cont_elev_b)
        medio = cont_elev_c;
    else if (maior_elev == 'A' && cont_elev_b > cont_elev_c)
        medio = cont_elev_b;

    if (maior_elev == 'B' && cont_elev_c > cont_elev_a)
        medio = cont_elev_c;
    else if (maior_elev == 'B' && cont_elev_a > cont_elev_c)
        medio = cont_elev_a;

    if (maior_elev == 'C' && cont_elev_a > cont_elev_b)
        medio = cont_elev_a;
    else if (maior_elev == 'C' && cont_elev_b > cont_elev_a)
        medio = cont_elev_b;

    percentual_maior = (mais_usado/50.00)*100;
    percentual_menor = (menos_usado/50.00)*100;
    diferenca = percentual_maior - percentual_menor;
    percentual_med = (medio/50.00)*100;

    printf("\nELEVADOR MAIS UTILIZADO -->(%c)<-- PERÍODO MAIS UTILIZADO -->(%c)<--",maior_elev,maior_periodo);
    printf("\nO PERÍODO MAIS UTILIZADO DE TODOS -->(%c)",maior_periodo_todos);
    printf("\nA DIFERENÇA DE PERCENTUAL ENTRE O MAIS USADO DOS HORÁRIOS E O MENOS USADO --> %.2f%%",diferenca);
    printf("\nA PERCENTAGEM SOBRE O TOTAL DE SERVIÇOS PRESTADOS DO ELEVADOR DE MÉDIA UTILIZAÇÃO --> %.2f%%",percentual_med);

    return 0;
}
