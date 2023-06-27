class Solution {
public:
    bool isPalindrome(int x) {
        std::string auxString = std::to_string(x);
        std::string invertString; 
        bool valid; 
        int tam = auxString.size(); 
        for(int i = (tam -1); i > -1; i--){
            invertString += auxString[i]; 
        }
        if(auxString == invertString){
            valid = true; 
        }else{
            valid = false;
        }
        return valid;
    }
};