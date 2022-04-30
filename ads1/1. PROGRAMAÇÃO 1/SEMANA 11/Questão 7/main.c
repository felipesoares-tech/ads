#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUESTÃO-7////////////////////////////////////////////
int fatorial (int num)
{
int fat;

for(fat=1; num>=1; num--)
    fat = fat * num;

return fat;
}

int main()
{

setlocale(LC_ALL,"");

int num,x,y,z;
float s;

s = 0;

printf("INFORME A QUANTIDADE DE TERMOS -> ");
scanf("%d", &num);

for(x=1,y=2,z=0; x<=num; x++,y+=2,z++)
{

  if(x%2 !=0)
    s = s + (pow(x,y)/fatorial(num-z));
  else
    s = s - (pow(x,y)/fatorial(num-z));

}

printf("\nO VALOR DE S É -> %.2f", s);

return 0;
}
