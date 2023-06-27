itens = [0, 4, 4.5, 5, 2, 1.5]
i = 1 
soma = 0 
choose, quant = [float(x) for x in input().split()] 
while(i <= 5): 
    if(choose == i): 
        soma = soma + (quant*itens[i])
    i = i + 1 
print("Total: R$ %.2f" % soma)