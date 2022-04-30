'''10 - A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações
sem juros. Faça um algoritmo que recebe um valor de uma compra e mostre o valor
das prestações.'''

vlr = float(input('Informe o valor da compra (R$): '))

x = 0

while x < 5:
    print(x+1,'ª PRESTACAO = R$',vlr/5)
    x += 1
