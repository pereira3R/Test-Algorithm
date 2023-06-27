n = int(input())
numeros = []
for i in range(n):
    numeros.append(int(input()))

contagem = {}
for numero in numeros:
    if numero not in contagem:
        contagem[numero] = 0
    contagem[numero] += 1

numeros_distintos = sorted(contagem.keys())
for numero in numeros_distintos:
    print(f"{numero} aparece {contagem[numero]} vez(es)")