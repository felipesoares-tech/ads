'''4 - Faça um algoritmo que leia o nome do vendedor, o seu salário fixo e o total (valor)
de vendas efetuadas por ele no mês. Sabendo que este vendedor ganha 15%% de
comissão sobre suas vendas efetuadas, informe seu nome, o salário fixo e o salário
total no final do mês.'''

nome = input('Informe o nome do vendedor: ')
salario = float(input('Informe o seu salario: '))
vendas = float(input('Informe o valor de vendas realizadas no mes: '))

print('Nome: ',nome)
print('Salario Fixo: R$',salario)
print('Salario Final do mes: ',salario+(0.15*vendas))