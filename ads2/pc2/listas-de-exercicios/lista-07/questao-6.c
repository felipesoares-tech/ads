#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*6. Fa�a um programa em C que leia dois pontos P1 =
(x1 , y1 ) e P2 = (x2 , y2 ) e, calcule e imprima a
dist�ncia entre esses dois pontos, cujo valor � dado
pela seguinte f�rmula:*/

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

    printf("DIST�NCIA = %.2f\n",dist);

    
    return 0;
}