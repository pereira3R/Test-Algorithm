matriz = [[0 for i in range(12)] for j in range(12)]

choose = input()
for linha in range(12):
  for coluna in range(12):
    valor = float(input())
    matriz[linha][coluna] = valor

count = soma = 0
counterRight = 10
counterLeft = 1
linha = 11
while(linha > 6):
  coluna = 1
  while(coluna < 11):
    if(counterLeft <= coluna <= counterRight):
        soma = soma + matriz[linha][coluna]
    coluna += 1
  counterLeft += 1
  counterRight -= 1 
  linha -= 1

if(choose == 'S'):
  print(soma)
elif(choose == 'M'):
  print(soma/30)
