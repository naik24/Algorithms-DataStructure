//Author: Prasad Naik
// Date Created: September 6, 2022
#include <iostream>
using namespace std;

//Function: Finding Length of String
void stringLength(char x[]){
    int length = 0;
    int i = 0;
    while(x[i] != '\0'){
        length++;
        i++;
    }
    cout << "Length of String: " << length;
}

void upperCase(char x[]){
    int i = 0;
    while(x[i] != '\0'){
        if((int)x[i] >= 97 && (int)x[i] <= 122){
            x[i] = (char)((int)x[i]  - 32);
        }
        i++;
    }
    cout << x;
}

void smallCase(char x[]){
    int i = 0;
    while(x[i] != '\0'){
        if((int)x[i] >= 65 && (int)x[i] <= 90){
            x[i] = (char)((int)x[i]  + 32);
        }
        i++;
    }
    cout << x;
}

int main(){
    char x[] = "Stevens";

    stringLength(x);
    upperCase(x);
    smallCase(x);
    
    
    return 0;
}