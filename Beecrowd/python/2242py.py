palavra = input()
counter = auxC = 0 
nomeV = ""
for i in range(len(palavra)): 
    if(palavra[i] == 'a' or palavra[i] == 'A'): 
        nomeV = nomeV + 'a'
        counter = counter + 1
    elif(palavra[i] == 'e' or palavra[i] == 'E'): 
        nomeV = nomeV + 'e'
        counter = counter + 1
    elif(palavra[i] == 'i' or palavra[i] == 'I'): 
        nomeV = nomeV + 'i'
        counter = counter + 1
    elif(palavra[i] == 'o' or palavra[i] == 'O'): 
        nomeV = nomeV + 'o'
        counter = counter + 1
    elif(palavra[i] == 'u' or palavra[i] == 'U'): 
        nomeV = nomeV + 'u'
        counter = counter + 1

nomeInvertido = ""
auxC = counter - 1
for j in range(counter): 
    nomeInvertido = nomeInvertido + nomeV[auxC]
    auxC = auxC - 1 
    
if(nomeV == nomeInvertido): 
    print("S")
else: 
    print("N")        