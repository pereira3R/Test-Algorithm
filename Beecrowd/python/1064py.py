i = somaInt = contaInt = 0
for i in range(6): 
    valor = float(input())
    if(valor>0): 
       contaInt = contaInt + 1
       somaInt = somaInt + valor
       if(i == 5): 
           print("%d valores positivos" % contaInt)
           print("%.1f" % (somaInt/contaInt))