valor1, valor2, valor3 = [int(x) for x in input().split()]
contaInserido = l = contaExiste = m = 0

valor22 = input()
valor22 = valor22.split()
contaExiste = len(valor22)
valor33 = input()
valor33 = valor33.split()
for l in range(valor2): 
    for m in range(valor3): 
        if(int(valor22[l]) == int(valor33[m])):
            contaExiste = contaExiste - 1
            break 
print("%d" % contaExiste)      