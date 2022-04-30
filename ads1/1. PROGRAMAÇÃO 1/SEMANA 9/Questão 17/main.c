#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,y,x,aux,cond;


printf("ESCOLHA O NÚMERO DO TERMO A SER MOSTRADO -> ");
scanf("%d", &n);

y=0;
x=0;
aux=1;

if(n%2 == 0){

cond = n/2;

while(y<cond)
{

y++;

aux = aux + x ;
x = x + aux;
printf("%d\n%d\n",aux,x);

}
}else{
cond = n/2;

while(y<=cond)
{

if(x!=0){
printf("%d\n",x);
}
aux = aux + x ;
printf("%d\n",aux);
x = x + aux;
y++;

}
}

return 0;
}
