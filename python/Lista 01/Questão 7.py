'''7 - Faça um algoritmo que leia a temperatura em graus Celsius e apresente a
temperatura convertida em graus Fahrenheit. A fórmula de conversão é:
F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.'''

temp=1

while temp:
    temp = float(input('Informe a temperatura em graus Celsius: '))
    if temp:
        print('Conversao resultante: ',(9*temp+160)/5,'F')