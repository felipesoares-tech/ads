'''3 - Elabore um programa a ler 4 notas de um aluno (de 1 a 10). Após calcular a média
das notas, apresentar a mensagem “Aprovada” se o aluno tiver obtido média maior
ou igual a 6, caso contrário, apresentar “Reprovado”.'''

notas = [0, 0, 0, 0]

x = 0
soma = 0
while x < 4:
    print('Digite a', x+1, 'ª nota!')
    notas[x] = float(input())
    soma += notas[x]
    x += 1

med = soma/4

if med >= 6:
    print('Aprovado!')
else:
    print('Reprovado!')
