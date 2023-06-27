#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j;
    double dificuldade, nota;
    char nome[1000];
    scanf("%d", &N);
    for(i=1; i<=N; i++){
      double maximo = -10, minimo = 100, soma = 0;
      scanf("%s", nome);
      scanf("%lf", &dificuldade);
      for(j=1; j<=7; j++){
        scanf("%lf", &nota);
        if(nota > maximo){
           maximo = nota;
        }if(nota < minimo){
          minimo = nota;
        }soma += nota;
      }
      soma = soma - (maximo+minimo);
      soma = soma * dificuldade;
      printf("%s %.2lf\n", nome, soma);
    }
  return 0;
}