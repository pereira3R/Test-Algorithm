N = int(input())
print(N)
Numero100 = N // 100
N = N - (Numero100*100)
Numero50 = N // 50
N = N - (Numero50*50)
Numero20 = N // 20
N = N - (Numero20*20)
Numero10 = N // 10
N = N - (Numero10*10)
Numero5 = N // 5
N = N - (Numero5*5)
Numero2 = N // 2
N = N - (Numero2*2)
Numero1 = N // 1
N = N - (Numero1*1)
print(f"{Numero100} nota(s) de R$ 100,00")
print(f"{Numero50} nota(s) de R$ 50,00")
print(f"{Numero20} nota(s) de R$ 20,00")
print(f"{Numero10} nota(s) de R$ 10,00")
print(f"{Numero5} nota(s) de R$ 5,00")
print(f"{Numero2} nota(s) de R$ 2,00")
print(f"{Numero1} nota(s) de R$ 1,00")