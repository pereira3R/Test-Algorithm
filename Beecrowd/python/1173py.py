valorUsuario = int(input())
calculus = valorUsuario
i = 0
if(valorUsuario <= 50):
    while(i < 10):
        if(i == 0):
            print(f"N[{i}] = {calculus}")
        else: 
            calculus = calculus*2
            print(f"N[{i}] = {calculus}")
        i = i + 1