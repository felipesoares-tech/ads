'''4 - Faça um programa que leia um número e mostre uma mensagem indicando se
este número é par ou ímpar e se é positivo ou negativo.'''

num = int(input('Digite um numero inteiro: '))

if num%2 == 0:
    print('Numero Par!')
else:
    print('Numero Impar!')

if num>0:
    print('Numero Positivo')
else:    
    print('Numero Negativo!')