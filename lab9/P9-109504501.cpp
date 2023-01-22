/*
 * Practice 9
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, i, j, s;
    string str = "mina";
    cin >> N;

    for(i = 0; i < N; i++){
        cin >> str;
        for(j = 0; j < str.size(); j++){
            s = 1;
            if(j == 0 or str[j] != str[j-1]){
                while(str[j] == str[j+s]){
                    s++;
                }
                cout << str[j] << s;
            }
        
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
