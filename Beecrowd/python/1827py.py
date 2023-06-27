import math

while True:
    try:
        N = int(input())
    except EOFError:
        break

    M = [[0 for i in range(N)] for j in range(N)]
    auxN = N-1

    for i in range(N):
        for j in range(N):
            if i == j:
                M[i][j] = 2

        M[i][auxN] = 3
        auxN -= 1

    contadorI = N // 3
    for i in range(contadorI, N - contadorI):
        for j in range(contadorI, N - contadorI):
            M[i][j] = 1

    contadorI = N // 2
    M[contadorI][contadorI] = 4

    for i in range(N):
        for j in range(N):
            print(M[i][j], end='')
        print()

    print()