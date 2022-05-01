'''6 - Faça um programa que leia dois valores inteiros e positivos X e Y. Calcule e mostre
a potência de XY utilizando estrutura de repetição.'''

x = int(input('Informe o valor da base: '))
y = int(input('Informe o valor do expoente: '))

print("Resultado: ", x**y)

# Realizando cálculo através de uma estrutura de repetição
aux = 0 
resp = 1
while aux < y:
    resp*=x
    aux+=1

print("Resultado: ",resp)
