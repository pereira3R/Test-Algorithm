while True:
    A, B, C = [int(x) for x in input().split()]
    valorB = valorC = index = 0 
    vet = []
    indexB = -1
    indexC = A
    k = 1

    for i in range(A): 
        vet.append(k)
        k += 1

    if(A == B == C == 0):
        break

    while True: 
        index = 0 

        while(index < B):
            indexB += 1 
            if(indexB == A):
                indexB = 0 
            if(vet[indexB] != 0):
                index += 1 
        index = 0 

        while(index < C):
            indexC -= 1 
            if(indexC == -1):
                indexC = A - 1 
            if(vet[indexC] != 0):
                index += 1 

        valorB = str(vet[indexB])
        valorC = str(vet[indexC])
        vet[indexC] = 0 
        vet[indexB] = 0
        
        if(sum(vet) != 0):
            if(valorB != valorC):
                if(len(valorB) == 2):
                    print("", valorB, end="")
                elif(len(valorB) == 1):
                    print(" ", valorB, end = "")
                if(len(valorC) == 2):
                    print("", valorC, end=",")
                elif(len(valorC) == 1):
                    print(" ", valorC, end=",")
            elif(valorB == valorC):
                if(len(valorB) == 2):
                    print("", valorB, end=",")
                elif(len(valorB) == 1):
                    print(" ", valorB, end = ",")
        elif(sum(vet) == 0):

            if(valorB != valorC):
                if(len(valorB) == 2):
                    print("", valorB, end="")
                elif(len(valorB) == 1):
                    print(" ", valorB, end = "")
                if(len(valorC) == 2):
                    print("", valorC)
                elif(len(valorC) == 1):
                    print(" ", valorC)
            elif(valorB == valorC):
                if(len(valorB) == 2):
                    print("", valorB)
                elif(len(valorB) == 1):
                    print(" ", valorB)

        if(sum(vet) == 0): 
            break
        

