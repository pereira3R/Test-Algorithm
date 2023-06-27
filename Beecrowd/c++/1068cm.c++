#include <iostream> 
#include <stack> 
using namespace std;


int main(){
    string frase;
    while(cin >> frase){
        stack <char> pilha;
        for(int i = 0; i < frase.size(); i++){
            if(frase[i] == '('){
                pilha.push('(');
            }else if(frase[i] == ')'){
                if(pilha.size() != 0){
                    pilha.pop();
                }else{
                    pilha.push('a');
                    break;
                }
            }
        }
        if(pilha.size() == 0){
            printf("correct\n");
        }else if(pilha.size() != 0){
            printf("incorrect\n");
        }
    }
    return 0;
}