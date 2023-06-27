#include <stdio.h>
#include <stdlib.h>

void relogioBinario(int hora, int minuto) {
    int baseH[4] = {8, 4, 2, 1};
    int baseM[6] = {32, 16, 8, 4, 2, 1};

    char verificH[4] = {' ', ' ', ' ', ' '};
    char verificM[6] = {' ', ' ', ' ', ' ', ' ', ' '};

    for (int i = 0; i < 4; i++) {
        if (hora >= baseH[i]) {
            verificH[i] = 'o';
            hora -= baseH[i];
        }
    }

    for (int i = 0; i < 6; i++) {
        if (minuto >= baseM[i]) {
            verificM[i] = 'o';
            minuto -= baseM[i];
        }
    }

    printf(" ____________________________________________\n");
    printf("|                                            |\n");
    printf("|    ____________________________________    |_\n");
    printf("|   |                                    |   |_)\n");
    printf("|   |   8         4         2         1  |   |\n");
    printf("|   |                                    |   |\n");
    printf("|   |   %c         %c         %c         %c  |   |\n", verificH[0], verificH[1], verificH[2], verificH[3]);
    printf("|   |                                    |   |\n");
    printf("|   |                                    |   |\n");
    printf("|   |   %c     %c     %c     %c     %c     %c  |   |\n", verificM[0], verificM[1], verificM[2], verificM[3], verificM[4], verificM[5]);
    printf("|   |                                    |   |\n");
    printf("|   |   32    16    8     4     2     1  |   |_\n");
    printf("|   |____________________________________|   |_)\n");
    printf("|                                            |\n");
    printf("|____________________________________________|\n\n");
}

int main() {
    int hora, minuto;

    while (scanf("%d:%d", &hora, &minuto) != EOF) {
        relogioBinario(hora, minuto);
    }

    return 0;
}
