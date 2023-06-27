use = int(input())
i = sumST = sumSF = sumAT = sumAF = sumBT = sumBF = index= 0 
while(i < use): 
    nome = input()
    nome = nome.split()
    a = input()
    a = a.split()
    b = input()
    b = b.split()
    sumSF = sumSF + int(a[0]) 
    sumST = sumST + int(b[0])
    sumBF = sumBF + int(a[1]) 
    sumBT = sumBT + int(b[1])
    sumAF = sumAF + int(a[2]) 
    sumAT = sumAT + int(b[2])
    i = i + 1 
    a.clear()
    b.clear()
    nome.clear()

print('Pontos de Saque: %.2f %%.' % (100*(sumST/sumSF)))
print('Pontos de Bloqueio: %.2f %%.' % (100*(sumBT/sumBF)))
print('Pontos de Ataque: %.2f %%.' % (100*(sumAT/sumAF)))