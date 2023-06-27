i = 0
counter = 0
while(i < 5): 
    a = int(input())
    if(a%2 == 0): 
        counter= counter + 1
    i = i + 1
print("{} valores pares".format(counter))