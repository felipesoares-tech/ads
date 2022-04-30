#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
int x,y,area;

printf("INFORME O VALOR DA BASE: ");
scanf("%d",&x);
printf("INFORME O VALOR DA ALTURA: ");
scanf("%d",&y);

area = (x*y)/2;

printf("\n¡REA: %d\n",area);
system("PAUSE");


return 0;
}
