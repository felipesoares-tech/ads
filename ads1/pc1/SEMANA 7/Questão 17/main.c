  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>
  ///////////////////////////QUESTÃO 17///////////////////////////
  int main()
  {
  setlocale(LC_ALL,"Portuguese");

  float peso,alt,imc;

 printf("INFORME A SUA ALUTRA: ");
 scanf("%f",&alt);

 printf("INFORME O SEU PESO: ");
 scanf("%f",&peso);

 imc = peso / (alt*alt);

 if(imc < 18.5)
 printf("\nSITUAÇÃO -> MAGREZA");
 else if (imc >= 18.5 && imc <= 24.99)
 printf("\nSITUAÇÃO -> SAUDÁVEL");
 else if (imc >= 25 && imc <= 29.99)
 printf("\nSITUAÇÃO -> SOBREPESO");
 else if (imc >= 30 && imc <= 34.99)
 printf("\nSITUAÇÃO -> OBESIDADE GRAU I");
 else if (imc >= 35 && imc <= 39.99)
 printf("\nSITUAÇÃO -> OBESIDADE GRAU II");
 else printf ("\nSITUAÇÃO -> OBESIDADE GRAU III");

 return 0;
 }
