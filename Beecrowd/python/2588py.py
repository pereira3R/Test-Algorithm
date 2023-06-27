while True:
    try:
        Palavras = input().strip()
    except EOFError:
        break
    Letras = [0] * 26
    for letra in Palavras:
        if letra.isupper():
            Letras[ord(letra) - 65] += 1
        else:
            Letras[ord(letra) - 97] += 1
    Impares = sum(1 for letra in Letras if letra % 2 != 0)
    print(0 if Impares <= 1 else Impares - 1)