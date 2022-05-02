#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
int num,suc,ant;

printf("DIGITE UM NÚMERO INTEIRO: ");
scanf("%d",&num);

suc = num+1;
ant = num-1;

printf("\nSUCESSOR: %d\n",suc);
printf("ANTECESSOR: %d\n",ant);
system("PAUSE");


}
