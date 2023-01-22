/*
 * Assignment 14
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
using namespace std;
 
int main() {
    int sum, mx, check;
    string input;
    while (getline(cin, input)){
        sum = 0;
        mx = 1;
        if(input == "-1"){
            cout << "\n";
            break;
        }
        int i;
        for (i = 0; i < input.size(); i++) {
            if (input[i] >= '0' and input[i] <= '9') {
                check = input[i] - '0';
            }
            else if (input[i] >= 'A' and input[i] <= 'Z') {
                check = input[i] - 'A' + 10;
            }
            else if (input[i] >= 'a' and input[i] <= 'z') {
                check = input[i] - 'a' + 36;
            }
            else continue;
 
            if (mx < check)
                mx = check;
            sum += check;
        }
 
        for (i = mx; i < 62; i++)
            if (!(sum % i)) {
                cout << i + 1 << "\n";
                break;
            }
 
        if (i == 62)
            cout << "such number is impossible!\n";
    }
    return 0;
}
