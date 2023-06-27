Numero100 = 0
Numero50 = 0
Numero20 = 0
Numero10 = 0
Numero5 = 0
Numero2 = 0
Numero1 = 0
Numero050 = 0
Numero025 = 0
Numero010 = 0
Numero005 = 0
Numero001 = 0

N = float(input())
Numero100 = int(N / 100)
N = N - (Numero100*100.00)
Numero50 = int(N / 50)
N = N - (Numero50*50.00)
Numero20 = int(N / 20)
N = N - (Numero20*20.00)
Numero10 = int(N / 10)
N = N - (Numero10*10.00)
Numero5 = int(N / 5)
N = N - (Numero5*5.00)
Numero2 = int(N / 2)
N = N - (Numero2*2.00)
Numero1 = int(N / 1)
N = N - (Numero1*1.00)
Numero050 = int(N / 0.5)
N = N - (Numero050 * 0.5)
Numero025 = int(N / 0.25)
N = N - (Numero025 * 0.25)
Numero010 = int(N / 0.1)
N = N - (Numero010 * 0.1)
Numero005 = int(N / 0.05)
N = N - (Numero005 * 0.05)
Numero001 = int(0.01 + (N / 0.01))
N = N - (Numero001 * 0.01)
print("NOTAS:")
print("%d nota(s) de R$ 100.00" % Numero100)
print("%d nota(s) de R$ 50.00" % Numero50)
print("%d nota(s) de R$ 20.00" % Numero20)
print("%d nota(s) de R$ 10.00" % Numero10)
print("%d nota(s) de R$ 5.00" % Numero5)
print("%d nota(s) de R$ 2.00" % Numero2)
print("MOEDAS:")
print("%d moeda(s) de R$ 1.00" % Numero1)
print("%d moeda(s) de R$ 0.50" % Numero050)
print("%d moeda(s) de R$ 0.25" % Numero025)
print("%d moeda(s) de R$ 0.10" % Numero010)
print("%d moeda(s) de R$ 0.05" % Numero005)
print("%d moeda(s) de R$ 0.01" % Numero001)