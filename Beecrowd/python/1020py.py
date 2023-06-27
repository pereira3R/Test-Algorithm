dias = int(input())
ano = meses = 0
while(dias >= 360): 
    dias = dias - 365  
    ano = ano + 1 
while(dias >= 30): 
    dias = dias - 30 
    meses = meses + 1 
print("%d ano(s)" % ano)
print("%d mes(es)" % meses)
print("%d dia(s)" % dias)
