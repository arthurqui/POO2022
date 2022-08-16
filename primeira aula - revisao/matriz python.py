letras = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
          'r', 's', 't', 'u', 'v', 'x', 'z']
numeros = []

numLinhas = input('Número de linhas: ')
numColunas = input('Número de colunas: ')

while int(numLinhas) > len(letras):
    print('Número de linhas deve ser = ou < que ', len(letras))
    numLinhas = input('Número de linhas: ')
    numColunas = input('Número de colunas: ')

for num in range(int(numColunas)):
    numeros.append(num)

for i in range(int(numLinhas)):
    print('')
    for c in range(len(numeros)):
        celula = letras[i] + str(numeros[c])
        print(celula, end = ' ')