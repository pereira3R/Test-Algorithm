senhaCorreta = 2002
valida = 1 
senhaTentativa = 0
while(valida ==1): 
    senhaTentativa = int(input())
    if(senhaTentativa == senhaCorreta): 
        print("Acesso Permitido")
        valida = 2
    else: 
        print("Senha Invalida")