#include <stdio.h>

void bubbleSort(int vet[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vet[j] < vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main() {
    int casos, i, j;
    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        int numAlunos;
        scanf("%d", &numAlunos);

        int notas[numAlunos];
        int notasOriginais[numAlunos];

        for (j = 0; j < numAlunos; j++) {
            scanf("%d", &notas[j]);
            notasOriginais[j] = notas[j];
        }

        bubbleSort(notas, numAlunos);

        int cont = 0;
        for (j = 0; j < numAlunos; j++) {
            if (notas[j] == notasOriginais[j]) {
                cont++;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}