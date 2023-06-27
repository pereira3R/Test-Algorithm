first_value = int(input())
if(first_value != 0):
  values_1 = input()
  values_1 = values_1.split()
  while(first_value != 0): 
    counterC = counterCC  = 0 
    baseCC = 0
    baseC = 1
    for i in range (first_value): 
      if(int(values_1[i]) == baseCC): 
        counterCC+= 1
      elif(int(values_1[i]) == baseC): 
        counterC+= 1
      if(i == first_value -1):
        print(f"Mary won {counterCC} times and John won {counterC} times")
  
    first_value = int(input())
    if(first_value != 0):
      values_1 = input()
      values_1 = values_1.split()