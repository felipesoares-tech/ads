'''6 - Leia dois valores para as variáveis A e B e efetue as trocas dos valores de forma
que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o
valor da variável A. Apresentar os valores trocados.'''

a = int(input('Informe o valor de a: '))
b = int(input('Informe o valor de b: '))

a,b = b,a

print('Valor de a=',a,'\nValor de b=',b)