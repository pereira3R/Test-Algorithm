X=Y=2
while((X) != 0 and (Y) != 0): 
    X, Y = [int(x) for x in input().split()]
    if(X > 0): 
        if(Y > 0): 
            print("primeiro")
        if(Y < 0):
            print("quarto")
    if(X < 0): 
        if(Y > 0): 
            print("segundo")
        if(Y < 0): 
            print("terceiro")
