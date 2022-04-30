#include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 ///////////////////////////////QUESTÃO 5 ////////////////////////////////////
 int main()
 {

 setlocale(LC_ALL,"Portuguese");
 float alug,mensal,anual,vlratr,atr;
 float tot,dvds,dvdatr,estr,rep;

 printf("INFORME A QUANTIDADE DE DVDs ALUGADOS: ");
 scanf("%f",&dvds);
 printf("INFORME O VALOR DO ALUGEL: R$");
 scanf("%f",&alug);

 mensal = (dvds/3)*alug; //UM TERÇO DAS FITAS SÃO ALUGADAS POR MÊS, LOGO O VALOR MENSAL POR VITAS ESTÁ ATRIBUIDO A "MENSAL"
 dvdatr = (dvds/3)/10; // UM DÉCIMO DOS DVDs MENSAIS SÃO ENTREGUES COM ATRASO.
 atr = (0.1*alug)*dvdatr; // A QUANTIDADE MENSAL DE DVDs ATRASADOS
 anual = (mensal * 12) + (atr*12); //GANHO ANUAL, SERIA QUANTIDADE DE DVDS ALUGADOS MENSALMENTE * 12 + O ATRASO
 estr = 0.02 * dvds;
 rep = dvds/10 * 12;
 tot = (rep + dvds) - estr;

 printf("\nFATURAMENTO ANUAL --> R$%.2f",anual);
 printf("\nGANHO COM MULTAS --> R$%.2f",atr);
 printf("\nDVDs RESTANTE --> %.2f\n\n",tot);
 system("PAUSE");

 return 0;
 }
