#include <iostream> 
#include <string>
using namespace std; 

int lengthOfLongestSubstring(string s) {
    int lenghtString = 0; int valid = 0; 
    std::string impString; 
    std::string finalString; 
    std::string verifyString = "";

    for(int i = 0; i < s.size(); i++){
        if(verifyString.size() > 0){
            for(int j = 0; j < verifyString.size(); j++){
                if(valid == 0){
                    char comp = s[i];
                    if(comp != verifyString[j]){
                        valid = 0;
                    }else{
                        valid = 1;
                    }
                    if(j == verifyString.size() -1){
                        if(valid == 0){
                            finalString = verifyString;
                        }
                    }
                }
            }
        }      

            if(verifyString.size() > finalString.size()){
                finalString = verifyString;
            }
        if(valid == 1){
            verifyString = "";
            valid = 0;
        }  
        verifyString.push_back(s[i]); 
    }
    if(s == " " || s.size() == 1){
        return 1;
    }else if(s == ""){
        return 0;
    }else{
        return finalString.size();
    }
}

int main(){
    std::string phrase; 
    printf("Pass the string: ");     
    cin >> phrase; 
    int number = lengthOfLongestSubstring(phrase);
    cout << "number is: " << number << endl;
    return 0; 
}