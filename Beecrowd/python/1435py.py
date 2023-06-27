import math

i = j = N = contador = auxContador = verifica = qtdaM = 0
M = [[0 for x in range(100)] for y in range(100)]
base = 2

def preenche(N):
    global i, j, M
    for i in range(N):
        for j in range(N):
            M[i][j] = 1
    return 0

def transforma(N):
    global i, j, M, contador, auxContador, qtdaM
    contador = 1
    auxContador = 0
    qtdaM = math.ceil(N / base)
    while qtdaM > 0:
        for i in range(contador, N - contador):
            for j in range(contador, N - contador):
                M[i][j] = contador + 1
        contador += 1
        qtdaM -= 1
    return 0

def imprime(N):
    global i, j, M
    if N == 1:
        print("{:3d}".format(N))
        print()
    else:
        for i in range(N):
            for j in range(N):
                if j == 0:
                    print("{:3d}".format(M[i][j]), end='')
                else:
                    print(" {:3d}".format(M[i][j]), end='')
                if j == N - 1:
                    print()
        print()
    return 0

if __name__ == "__main__":
    N = int(input())
    while N > 0 and N <= 100:
        if N == 1 or N == 2:
            preenche(N)
            imprime(N)
        else:
            preenche(N)
            transforma(N)
            imprime(N)
        N = int(input())