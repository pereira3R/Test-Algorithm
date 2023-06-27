#include <stdio.h>
#include <string.h>

void criptografar(char *mensagem) {
    int tam = strlen(mensagem);
    int i;

    for (i = 0; i < tam; i++) {
        if ((mensagem[i] >= 'a' && mensagem[i] <= 'z') || (mensagem[i] >= 'A' && mensagem[i] <= 'Z')) {
            mensagem[i] += 3;
        }
    }

    int inicio = 0;
    int fim = tam - 1;

    while (inicio < fim) {
        char temp = mensagem[inicio];
        mensagem[inicio] = mensagem[fim];
        mensagem[fim] = temp;

        inicio++;
        fim--;
    }
    int metade = tam / 2;

    for (i = metade; i < tam; i++) {
        mensagem[i] -= 1;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    while (N > 0) {
        char mensagem[1001];
        fgets(mensagem, sizeof(mensagem), stdin);
        mensagem[strcspn(mensagem, "\n")] = '\0';
        criptografar(mensagem);
        printf("%s\n", mensagem);
        N--;
    }

    return 0;
}