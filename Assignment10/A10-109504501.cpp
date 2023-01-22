/*
 * Assignment 10
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>

using namespace std;

int main(){
    char input_str;
    string method;
    string all_str = "";
    cin >> method;
    while(method == "pop" or method == "push" or method == "list"){
        if(method == "pop"){
            if(all_str.size() == 0){
                cout << "empty" << endl;
            }
            else{
                cout << all_str[all_str.size()-1] << endl;
                all_str.erase(all_str.size()-1, 1);
            }
        }
        if(method == "push"){
            cin >> input_str;
            all_str.append(1, input_str);
        }
        if(method == "list"){
            for(int i = 0; i < all_str.size(); i++){
                cout << all_str[i] << " ";
            }
            cout << endl;
        }
        cin >> method;
    }
}
