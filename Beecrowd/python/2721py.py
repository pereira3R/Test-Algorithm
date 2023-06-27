nomes = ["Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"]
valores = input()
valores = valores.split()
soma = contaN = 0
for i in range(len(valores)):
    soma = soma + int(valores[i])
    if(i ==  len(valores) - 1):
        while(soma > 0):
            nome = nomes[contaN]
            soma = soma - 1
            contaN = contaN + 1 
            if(contaN % 9 ==0):
                contaN = 0

print(nome)