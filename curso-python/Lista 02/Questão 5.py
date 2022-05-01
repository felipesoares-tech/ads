x = int(input('Digite o valor do primeiro lado: '))
y = int(input('Digite o valor do segundo lado: '))
z = int(input('Digite o valor do terceiro lado: '))

if x > (y+z) or y > (x+z) or z > (y+x):
    print('Isto não é um triângulo')
elif x == y and x == z:
    print('Triangulo Equilatero')
elif x == y or x == z or y == z:
    print('Triangulo Isoceles')
else:
    print('Triangulo Escaleno')
