#include <stdio.h>

int calcularSoma(int vet[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    return soma;
}

int main() {
    while (1) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        int valorB = 0, valorC = 0, index = 0;
        int vet[A];
        int indexB = -1;
        int indexC = A;
        int k = 1;

        for (int i = 0; i < A; i++) {
            vet[i] = k;
            k++;
        }

        if (A == 0 && B == 0 && C == 0) {
            break;
        }

        while (1) {
            index = 0;

            while (index < B) {
                indexB++;
                if (indexB == A) {
                    indexB = 0;
                }
                if (vet[indexB] != 0) {
                    index++;
                }
            }

            index = 0;

            while (index < C) {
                indexC--;
                if (indexC == -1) {
                    indexC = A - 1;
                }
                if (vet[indexC] != 0) {
                    index++;
                }
            }

            valorB = vet[indexB];
            valorC = vet[indexC];
            vet[indexC] = 0;
            vet[indexB] = 0;

            if (calcularSoma(vet, A) != 0) {
                if (valorB != valorC) {
                    if (valorB >= 10) {
                        printf(" %d", valorB);
                    } else {
                        printf("  %d", valorB);
                    }

                    if (valorC >= 10) {
                        printf(" %d,", valorC);
                    } else {
                        printf("  %d,", valorC);
                    }
                } else {
                    if (valorB >= 10) {
                        printf(" %d,", valorB);
                    } else {
                        printf("  %d,", valorB);
                    }
                }
            } else {
                if (valorB != valorC) {
                    if (valorB >= 10) {
                        printf(" %d", valorB);
                    } else {
                        printf("  %d", valorB);
                    }

                    if (valorC >= 10) {
                        printf(" %d\n", valorC);
                    } else {
                        printf("  %d\n", valorC);
                    }
                } else {
                    if (valorB >= 10) {
                        printf(" %d\n", valorB);
                    } else {
                        printf("  %d\n", valorB);
                    }
                }
            }

            if (calcularSoma(vet, A) == 0) {
                break;
            }
        }
    }

    return 0;
}
