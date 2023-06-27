numerosValores = int(input())
while(numerosValores > 0):
    numeroBase = 2
    validaPassagem = 1
    valorUser = int(input())
    for i in range(valorUser):
        if(valorUser % numeroBase == 0):
            if((numeroBase > 1) and (numeroBase < valorUser)):  
                validaPassagem = 2  
        numeroBase = numeroBase + 1
        if(validaPassagem ==2):
            break
    if(validaPassagem == 1):
        print("%d eh primo" % valorUser)
    else: 
        print("%d nao eh primo" % valorUser)
        
    numerosValores = numerosValores - 1