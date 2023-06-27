#include <iostream>
#include <cstring>
using namespace std;

int binarioDecimal(const char* binarioChar) {
    int resultado = binarioChar[0] - '0';
    int tamanho = strlen(binarioChar);

    for (int i = 1; i < tamanho; i++) {
        resultado *= 2;
        resultado += (binarioChar[i] - '0');
    }

    return resultado;
}

int gcd(int valor1, int valor2) {
    if (valor2 > valor1)
        return gcd(valor2, valor1);
    if (valor2 == 0)
        return valor1;
    else
        return gcd(valor2, valor1 % valor2);
}

int main() {
    int n;
    char valor1[32], valor2[32];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        cin >> valor1;
        cin >> valor2;

        int v1 = binarioDecimal(valor1);
        int v2 = binarioDecimal(valor2);

        int gcdResult = gcd(v1, v2);

        if (gcdResult != 1)
            printf("Pair #%d: All you need is love!\n", i);
        else
            printf("Pair #%d: Love is not all you need!\n", i);
    }

    return 0;
}
