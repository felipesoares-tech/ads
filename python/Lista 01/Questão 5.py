"""5 - Escreva um algoritmo que leia o nome de um aluno e as notas das três provas que
ele obteve no bimestre. No final, informar o nome do aluno e a sua média (aritmética)."""

notas = [0, 0, 0]

nome = input('Informe o nome do aluno: ')

x=0
acm=0

while x < 3:
    print('Informe a',x+1,'ª Nota: ') 
    notas[x] = float(input())
    acm+=notas[x]
    x += 1

print('Nome do aluno =',nome,'\nMedia = ',acm/3)