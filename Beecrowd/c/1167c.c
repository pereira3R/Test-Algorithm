#include <stdio.h>

struct Inf {
    char nome[30];
    int valor;
    int anterior, proxima;
};

int main()
{
    while (1) {
        int numInfs, i, j;
        struct Inf inf[100];

        scanf("%d", &numInfs);
        if (!numInfs)
            break;

        for (i = 0; i < numInfs; ++i) {
            scanf("%s%d", inf[i].nome, &inf[i].valor);

            inf[i].anterior = ((i - 1) % numInfs + numInfs) % numInfs;
            inf[i].proxima = (i + 1) % numInfs;
        }

        i = 0;
        while (numInfs > 1) {
            int valor = inf[i].valor;

            if (valor % 2) {
                for (j = 0; j < valor; ++j)
                    i = inf[i].proxima;
            } else {
                for (j = 0; j < valor; ++j)
                    i = inf[i].anterior;
            }

            inf[inf[i].anterior].proxima = inf[i].proxima;
            inf[inf[i].proxima].anterior = inf[i].anterior;

            --numInfs;
        }
        i = inf[i].proxima;

        printf("Vencedor(a): %s\n", inf[i].nome);
    }

    return 0;
}


