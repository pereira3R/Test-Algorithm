A,B,C = [float(x) for x in input().split()]
if(((B*B) - (4*A*C)) < 0 or  A == 0): 
    print("Impossivel calcular") 
else: 
    print("R1 = %.5f" % ((-B + (((B*B) - (4*A*C))**0.5))/(2*A)))
    print("R2 = %.5f" % ((-B - (((B*B) - (4*A*C))**0.5))/(2*A)))