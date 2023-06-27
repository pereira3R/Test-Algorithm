lista = []
A, B = [int(x) for x in input().split()]
lista.append(A)
lista.append(B)
if((1<= lista[0] <= 13) and (1 <= lista[1] <= 13)): 
    if(lista[1] == lista[0]): 
        print(lista[1])
    if(lista[0] != lista[1]): 
        print(max(lista))