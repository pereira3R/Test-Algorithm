import math

dia1 = hora1 = minuto1 = segundo1 = dia2 = hora2 = minuto2 = segundo2 = 0

entrada1 = input().split(" ")
dia1 = int(entrada1[1])

entrada2 = input().split(" : ")
hora1 = int(entrada2[0])
minuto1 = int(entrada2[1])
segundo1 = int(entrada2[2])

entrada3 = input().split(" ")
dia2 = int(entrada3[1])

entrada4 = input().split(" : ")
hora2 = int(entrada4[0])
minuto2 = int(entrada4[1])
segundo2 = int(entrada4[2])

if dia2 < 31:
    calculaSegundos1 = abs(dia1*86400) + hora1*3600 + minuto1*60 + segundo1
    calculaSegundos2 = abs(dia2*86400) + hora2*3600 + minuto2*60 + segundo2
    calTotal = abs(calculaSegundos1 - calculaSegundos2)
    calGasto = (calTotal // 86400)
    calTotal = (calTotal % 86400)
    calHoras = calTotal // 3600
    calTotal = (calTotal % 3600)
    calMinutos = (calTotal // 60)
    calTotal = (calTotal % 60)
    calSegundos = calTotal

    print("%d dia(s)" %calGasto)
    print("%d hora(s)" %calHoras)
    print("%d minuto(s)" %calMinutos)
    print("%d segundo(s)" %calSegundos)