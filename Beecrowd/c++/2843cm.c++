#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct reg {
    int fase;
    int reacao;
    int escrita;
} competidor;

int main(void) {
    int n, rodadas, faseAtual = 1;
    char texto[100000];
    scanf("%d\n", &n);
    rodadas = n;
    competidor *p = (competidor *)malloc(sizeof(competidor) * n);
    for (int i = 0; i < n; i++) {
        p[i].fase = 1;
        scanf("%d %d\n", &p[i].reacao, &p[i].escrita);
    }

    fgets(texto, 100000, stdin);
    int tamString = strlen(texto);

    while (rodadas != 1) {
        tamString += tamString;
        int i = 0;

        while (i < n - 1) {
            if (p[i].fase == faseAtual) {
                int j = i + 1;

                while (j < n) {
                    if (p[j].fase == faseAtual) {
                        int result_i = p[i].reacao + p[i].escrita * tamString;
                        int result_j = p[j].reacao + p[j].escrita * tamString;

                        if (result_i < result_j) {
                            p[i].fase++;
                        } else if (result_i > result_j) {
                            p[j].fase++;
                        } else {
                            p[i].fase++;
                        }
                        break;
                    } else {
                        j++;
                    }
                }
                i = j + 1;
            } else {
                i++;
            }
        }

        faseAtual++;
        rodadas /= 2;
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", p[i].fase);
    }

    printf("%d\n", p[n - 1].fase);
    free(p);
    return 0;
}
