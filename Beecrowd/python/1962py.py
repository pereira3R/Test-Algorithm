import sys

for line in sys.stdin:
    N = int(line)
    for i in range(N):
        valor = int(input())
        if valor > 2015:
            print(f"{valor - 2014} A.C.")
        elif valor < 2015:
            print(f"{2015 - valor} D.C.")
        else:
            print("1 A.C.")