from math import floor
from math import ceil
valueBase = 1 

while True:
  try:
    counterSpaces = counterSymbol = counterVerify = 0
    valueBase = int(input())
    counter = 0
    counterSymbol = 1
    space = " "
    symbol = "*"
    numberSpaces = floor((valueBase/2))
    auxSpace = numberSpaces
    if((valueBase % 2 != 0) and valueBase>2):
      while(counter != ceil(valueBase/2)):
        print((space*(numberSpaces)) + (symbol*counterSymbol))
        counter = counter + 1
        counterSymbol = counterSymbol + 2
        numberSpaces = numberSpaces - 1
        if(counter == ceil(valueBase/2)): 
          space = " "
          symbol = "*"
          print((space*(auxSpace))+(symbol*1))
          print((space*(auxSpace-1))+(symbol*3))

    print()
  except EOFError:
    break 