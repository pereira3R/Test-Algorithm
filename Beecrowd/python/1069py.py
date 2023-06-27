n = int(input())

resultados = []

for i in range(n):
    entrada = input().strip()

    pilha = []
    diamantes = 0

    for caractere in entrada:
        if caractere == "<":
            pilha.append(caractere)
        elif caractere == ">":
            if len(pilha) > 0 and pilha[-1] == "<":
                pilha.pop()
                diamantes += 1
        else:
            pass 

    resultados.append(diamantes)

for resultado in resultados:
    print(resultado)