valorUser = int(input())
valorpar = 2 
for i in range(valorUser+1):     
    calculus = i * i 
    if((i % 2 == 0) and i > 0): 
        print("{}^{} = {}".format(i, valorpar, calculus))
    calculus = 0 