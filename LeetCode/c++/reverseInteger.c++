#include <iostream> 
#include <string>
using namespace std;


int reverse(int x){
    long int sinal = 0;
    int valid = 0;
    if(x < 0){
        sinal = -1;
        valid = 1;
        x = abs(x);
    }
    string xString = std::to_string(x);
    string newString = "";
    for(int i = (xString.length() - 1); i >= 0 ; i--){
        newString += xString[i];
    }
    for(int j = 0; j <= newString.length() - 1; j++){
        if(newString[0] == 0){
            newString.erase(0,1);
        }else{
            break;
        }
    }
    if(valid == 1){
        long int valueFinal = std::stol(newString) * sinal;
        if(valueFinal >= 2147483648 || valueFinal <= -2147483648){
            return 0;
        }
        return valueFinal;
    }else{
        long valueFinal = std::stol(newString);
        if(valueFinal >= 2147483648 || valueFinal <= -2147483648){
            return 0;
        }
        return valueFinal;
    }
}



int main(){

    int inputUser;
    scanf("%d", &inputUser);
    int outputValue = reverse(inputUser);
    printf("%d", outputValue);
    return 0;
}