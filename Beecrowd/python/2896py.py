entrada = int(input())

for i in range(entrada):
  n, k = map(int, input().split())
  total = (n // k) + (n % k)
  print(total)