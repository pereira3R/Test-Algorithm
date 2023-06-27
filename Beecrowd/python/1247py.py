while True:
    try:
        d, vf, vg = [int(x) for x in input().split()]
        vf = 12/vf
        vg = ((d*d+ 144)**0.5)/vg
        if(vg > vf): 
            print('N') 
        else:
            print('S') 
    except EOFError:
        break
        