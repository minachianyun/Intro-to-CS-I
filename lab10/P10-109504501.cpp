/*
 * Practice 10
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string check;
    string input_str;
    int n = 0;
    while(n != -1){
        cin >> input_str;
        if(input_str == "-1"){
            n = -1;
            cout << "\n";
            break;
        }
        else{
            for(int i = 1; i < input_str.size()+1; i++){
                check = check + input_str[input_str.size()-i];
            }
            cout << check << endl;
            if(check == input_str){
                cout << "Palindrome!\n";
            }
            else{
                cout << "Not Palindrome!\n";
            }
        }
        n = 0;
        check = "";
        }
    
    return 0;
}

