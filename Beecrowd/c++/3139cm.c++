#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
long long atual, meta;
long long sub[30] = {0};

scanf("%lld %lld", &atual, &meta);

long long soma = 0;
for (int i = 0; i < 30; ++i) {
    scanf("%lld", &sub[i]);
    soma += sub[i];
}

long long media = 0;
long long dias = 0;

while (atual < meta) {
    for (int i = 0; i < 30 && atual < meta; ++i) {
        media = ceil(soma / 30.0);
        atual += media;
        soma = soma + (media - sub[i]);
        sub[i] = media;
        ++dias;
    }
}

printf("%lld\n", dias);

return 0;
}