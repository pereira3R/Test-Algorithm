#include <iostream>
#include <string>
#include <sstream>
using namespace std;

long int getIntegerPart(const std::string& input) {
    size_t start = input.find_first_not_of(" ");
    size_t end = input.find_last_not_of(" ");
    
    if (start == std::string::npos || end == std::string::npos) {
    }
    
    std::string integerPart = input.substr(start, end - start + 1);

    std::istringstream iss(integerPart);
    long int result = 0;
    iss >> result;

    return result;
};

long int myAtoi(string s) {
    string newString = "";
    string newS = "";

    long int zero = 0;
    long int sinal = 1;
    long int sinalM = 1;
    int firstWord = 0;
    int space = 0;

    for(int y = 0; y < s.length(); y++){
        if(y >1){
            if(s[y-2] == '0' && isdigit(s[y-2]) && (s[y-1] == '-') && !isdigit(s[y-1]) && isdigit(s[y])){
                return 0;
            }
            if((s[y-2] == '-' || s[y-2] == '+') && s[y-1] == '0' && s[y] == ' '){
                return 0;
            }
            if(s[y-2] == '0' && s[y-1] == ' '){
                return 0;
            }
        }
        if(isspace(s[y])){
            space++;
        }
    }
    if(space == s.length()){
        return 0;
    }
    long int firstIntegerPart = getIntegerPart(s);
    if((-2147483648 <= firstIntegerPart) && (firstIntegerPart <= (2147483648 -1))){
        return firstIntegerPart;
    }

    for(char ch : s){
        if(!isspace(ch)){
            newS += ch;
        }
    }

    if(!isdigit(newS[0]) && newS[0] != '-' && newS[0] != '+'){
        return 0;
    }

    for (char ch : newS) {
        if(ch == '+'){
            sinalM = 2;
        }
        if(ch == '-'){
            sinal = -1;
        }
        if(!isdigit(ch) && ch != '-' && ch != '+' && ch != '.'){
            firstWord = 1;
        }
        if(ch != '.' && firstWord == 0){
            if(isdigit(ch)){
                newString += ch;
            }
        }else{
            break;
        }
    }
    if((sinal == -1) && (sinalM == 2)){
        return zero;
    }
    if(newString == ""){
        return 0;
    }else{
        string subString = "";
        if(newString.length() >= 10){
            for(int k = 0; k <= 10; k++){
                subString += newString[k];
            }
            long long int newI = std::stol(subString);
            if(sinal == -1){
                newI *= sinal;
                long long int refeInt31 = -2147483648;
                if(newI <= refeInt31){
                    return -2147483648;
                }
            }else if(sinal == 1){
                long long int refeInt32 = 2147483648;
                if(newI >= refeInt32){
                    return 2147483648 -1;
                }
            }
            
        }
    }
    long int newInt = std::stol(newString);
    return (newInt * sinal);
    
};

int main() {
    string input;
    std::getline(cin, input);
    int output = myAtoi(input);
    cout << "Parte inteira encontrada na string: " << output << endl;
    return 0;
}
