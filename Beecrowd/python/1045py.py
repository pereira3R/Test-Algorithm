import math

A, B, C = map(float, input().split())
maior = max(A, B, C)
menor = min(A, B, C)
meio = A + B + C - maior - menor

if A and B and C:
    if maior >= meio + menor:
        print("NAO FORMA TRIANGULO")
    else:
        if (maior ** 2) == (meio ** 2 + menor ** 2):
            print("TRIANGULO RETANGULO")
        elif (maior ** 2) > (meio ** 2 + menor ** 2):
            print("TRIANGULO OBTUSANGULO")
        elif (maior ** 2) < (meio ** 2 + menor ** 2):
            print("TRIANGULO ACUTANGULO")
        if A == B == C:
            print("TRIANGULO EQUILATERO")
        elif A == B or B == C or C == A:
            print("TRIANGULO ISOSCELES")