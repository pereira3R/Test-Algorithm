import os

def contar_arquivos(diretorio):
    return len([arquivo for arquivo in os.listdir(diretorio) if os.path.isfile(os.path.join(diretorio, arquivo))])

diretorio_alvo = "/caminho/do/seu/diretorio"
numero_de_arquivos = contar_arquivos(diretorio_alvo)

print(f"O número de arquivos em {diretorio_alvo} é: {numero_de_arquivos}")
