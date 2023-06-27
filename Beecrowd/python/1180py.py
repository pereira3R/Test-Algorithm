user = int(input())
userE = input()
userE = userE.split()
i = 0
index = 0 
while(i < user): 
    if(i == 0): 
        menor = int(userE[i])
    if((int(userE[i]) < menor) and i >= 1): 
        menor = int(userE[i])
        index = i 
    i = i + 1
print("Menor valor: %d" % menor)
print("Posicao: %d" % index)