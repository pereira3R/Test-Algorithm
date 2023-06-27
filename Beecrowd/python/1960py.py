N = int(input())

if N > 0 and N < 1000:
    while N > 0:
        if N >= 500:
            if N >= 900 and N < 1000:
                print("CM", end='')
                N = N - 900
            else:
                print("D", end='')
                N = N - 500
        elif N >= 100 and N < 500:
            if N >= 400:
                print("CD", end='')
                N = N - 400
            else:
                print("C", end='')
                N = N - 100
        elif N >= 50 and N < 100:
            if N >= 90:
                print("XC", end='')
                N = N - 90
            else:
                print("L", end='')
                N = N - 50
        elif N >= 10 and N < 50:
            if N >= 40:
                print("XL", end='')
                N = N - 40
            else:
                print("X", end='')
                N = N - 10
        elif N >= 5 and N < 10:
            if N >= 9:
                print("IX", end='')
                N = N - 9
            else:
                print("V", end='')
                N = N - 5
        else:
            if N >= 4 and N < 5:
                print("IV", end='')
                N = N - 4
            else:
                print("I", end='')
                N = N - 1
    print()