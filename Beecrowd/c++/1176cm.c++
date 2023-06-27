#include <iostream> 
using namespace std; 

void calculaFibo(int n){
    long long int p1 =0;
    long long int p2 = 0;
    long long int fibo = 0;
    for(int i = 0; i <= n; i++){
        if(i <= 1){
            if(i ==  0){
                p1 = 0;
                if(n == 0){
                    fibo = 0;
                }
            }if(i == 1){
                p2 = 1;
                if(n == 1){
                    fibo = p2;
                }
            }
        }else{
            fibo = p1 + p2;
            p1 = p2;
            p2 = fibo; 

        }
    }
    printf("Fib(%d) = %lld", n, fibo);
    printf("\n");
}

int main(){

    int numeroTestes; 
    int valorUsuario;
    int contadorFimWHile = 0; 
    cin >> numeroTestes; 
    while(contadorFimWHile < numeroTestes){
        cin >> valorUsuario; 
        if(1 <= valorUsuario <= 60){
            calculaFibo(valorUsuario);
        }
        contadorFimWHile++;
    }

    return 0; 
}