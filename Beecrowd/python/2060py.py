use = int(input())
numbers = input()
numbers= numbers.split()
counter2 = counter3 = counter4 = counter5 = 0
i = 0 
while(i < use): 
    if(int(numbers[i]) % 2 == 0): 
        counter2 = counter2 + 1
    if(int(numbers[i]) % 3 == 0): 
        counter3 = counter3 + 1
    if(int(numbers[i]) % 4 == 0):
        counter4 = counter4 + 1
    if(int(numbers[i]) % 5 == 0): 
        counter5 = counter5 + 1 
    i = i + 1
print("{} Multiplo(s) de 2".format(counter2))
print("{} Multiplo(s) de 3".format(counter3))
print("{} Multiplo(s) de 4".format(counter4))
print("{} Multiplo(s) de 5".format(counter5))