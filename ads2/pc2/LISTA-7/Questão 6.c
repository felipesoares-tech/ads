#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*6. Faça um programa em C que leia dois pontos P1 =
(x1 , y1 ) e P2 = (x2 , y2 ) e, calcule e imprima a
distância entre esses dois pontos, cujo valor é dado
pela seguinte fórmula:*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int x1,y1,x2,y2;
    float dist;

    printf("\nINFORME O VALOR DE P1 (x1,y1): ");
    scanf("%d,%d",&x1,&y1);

    printf("INFORME O VALOR DE P2 (x2,y2): ");
    scanf("%d,%d",&x2,&y2);

    dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("DISTÂNCIA = %.2f\n",dist);

    
    return 0;
}