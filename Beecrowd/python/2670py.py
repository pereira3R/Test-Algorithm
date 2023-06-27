valores = [int(input()) for x in range(3)]
tempo = []
tempo.append(4*valores[0] + 2*valores[1])
tempo.append(2*valores[0] + 2*valores[2])
tempo.append(2*valores[1] + 4*valores[2])
tempo.sort()
print(tempo[0])