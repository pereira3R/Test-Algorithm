while True:
    try:
        entrada = input()
        tamanho = len(entrada)
        pontuacao = 1
        palavra_final = ''
        palavra_temporaria = ''
        
        for indice in range(tamanho):
            caractere = entrada[indice]
            
            if caractere != '[' and caractere != ']':
                if pontuacao:
                    palavra_final += caractere
                else:
                    palavra_temporaria += caractere
            
            if caractere == '[':
                if pontuacao:
                    pontuacao = 0
                else:
                    palavra_final = palavra_temporaria + palavra_final
                    palavra_temporaria = ''
            
            elif caractere == ']':
                pontuacao = 1
                palavra_final = palavra_temporaria + palavra_final
                palavra_temporaria = ''

        if palavra_temporaria:
            palavra_final = palavra_temporaria + palavra_final
        print(palavra_final)

    except EOFError:
        break
