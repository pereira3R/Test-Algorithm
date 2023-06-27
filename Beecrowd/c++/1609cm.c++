#include <iostream> 
#include <map> 
using namespace std; 

int main(){ 
    int valorRepete;
    int valorRepeteUSER;    
    int valorAnalisa; 
    int limiteRepete = 0, limiteRepeteUSER = 0; 
    map<int, int> mapa;
    scanf("%d", &valorRepete); 
    while(limiteRepete < valorRepete){
        limiteRepeteUSER = 0;
        scanf("%d", &valorRepeteUSER);
        while(limiteRepeteUSER < valorRepeteUSER){
            scanf("%d", &valorAnalisa); 
            mapa.insert(make_pair(valorAnalisa, limiteRepete));
            limiteRepeteUSER++;
            if(limiteRepeteUSER == valorRepeteUSER){
                printf("%ld\n", mapa.size());
                mapa.clear();
            }
        }
        limiteRepete++;
    }
    return 0;
}