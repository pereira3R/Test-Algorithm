escolha = int(input())
i = 1
somaC = somaR = somaS = total = 0 
while (i <= escolha): 
    numero, tipo = [str(x) for x in input().split(' ')]
    numero = int(numero)
    if(tipo == 'C'):
       somaC = somaC + numero
    if(tipo == 'S'): 
        somaS = somaS + numero
    if(tipo == 'R'): 
        somaR = somaR + numero
    i = i + 1
    
total = somaS + somaR + somaC
print("Total: %d cobaias" % total)
print("Total de coelhos: %d" % somaC)
print("Total de ratos: %d" % somaR)
print("Total de sapos: %d" % somaS)
print("Percentual de coelhos: %.2f %%" % (100.00*(somaC*1.00)/total))
print("Percentual de ratos: %.2f %%" % (100.00*(somaR*1.00)/total))
print("Percentual de sapos: %.2f %%" % (100.00*(somaS*1.00)/total))

        