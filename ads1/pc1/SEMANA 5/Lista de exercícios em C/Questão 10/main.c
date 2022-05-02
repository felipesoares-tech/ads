#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
int num,dg4,dg3,dg2,dg1,a,b,c,inv,somainv,dig;

printf("DIGITE UM NÚMERO DE 3 DÍGITOS: ");
scanf("%i",&num); //num = 123
dg3 = num%10; //3
a = num/10; //12
dg2 = a%10; //2
b = a/10; // 1,2
dg1 = b; // 1
inv= (dg3*100) + (dg2*10) + (dg1*1);
somainv = inv + num;

if(somainv>999){
                        //somainv = 1234
dg4 = somainv%10; //4
a = somainv/10; //123
dg3 = a%10; //3
b = a/10; // 12
dg2 = b%10; // 2
c = b/10; //1,2
dg1 = c; // 1
inv= (dg1*1) + (dg2*2) + (dg3*3) + (dg4*4);
dig = inv%10;
printf("O DÍGITO VERIFICADOR É: %i",dig);

}else{                //somainv = 123
dg3 = somainv%10; //3
a = somainv/10; //12
dg2 = a%10; //2
b = a/10; // 1,2
dg1 = b; // 1
inv= (dg1*1) + (dg2*2) + (dg3*3);
dig = inv%10;
printf("O DÍGITO VERIFICADOR É: %i\n\n",dig);
system("PAUSE");
}
return 0;

}
