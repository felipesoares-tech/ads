'''8 - Elaborar um algoritmo que efetue a apresentação do valor da conversão em real
(R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação
do dólar e também a quantidade de dólares disponíveis com o usuário.'''

cot = float(input('Informe a cotacao atual do dolar: '))
vlr = float(input('Informe o valor disponivel em dolar: $'))

print('Valor em REAIS: R$',vlr*cot)