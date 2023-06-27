N = int(input())
Nomes = []
Pontuacao = []
Vet = []
for i in range(N):
    nome = input()
    Nomes.append(nome)
    GD = float(input())
    linha = []
    String = input().split(' ')
    linha = [float(String[x]) for x in range(0, 7)]
    Vet.append(linha)
    maior = 0
    menor = 9999
    for j in range(7):
        if Vet[i][j] > maior:
            maior = Vet[i][j]
            P1 = j
        if Vet[i][j] < menor:
            menor = Vet[i][j]
            P2 = j
    Vet[i][P1] = 0
    Vet[i][P2] = 0
    Soma = sum(Vet[i])
    Pontuacao.append(Soma * GD)
    print("%s %.2f" % (Nomes[i], Pontuacao[i]))