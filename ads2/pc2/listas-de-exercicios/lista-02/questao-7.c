#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-7/////////////////
int main()
{

    setlocale(LC_ALL,"");

    int n1=0,n2=1,i;
    int res=0;

    printf("%d\n%d\n",n1,n2);

    for(i=0; i<8; i++)
    {
       res = n2 + n1;
       n1 = n2;
       n2 = res;
       printf("%d\n",res);

    }




 return 0;
}
