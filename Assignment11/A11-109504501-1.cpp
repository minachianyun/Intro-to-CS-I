/*
 * Assignment 11
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
using namespace std;
int main() {
    int size;
    int m[100][100];
    int c = 0;
    while(true){
        cout << "Input Size:";
        cin >> size;
        if(size == -1){
            cout << "\n";
            break;
        }
        for(int i = 0; i < size; i++){
            for(int j= 0; j < size; j++){
                cin>>m[i][j];
            }
        }
        int t = 1;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(m[i][j] != m[size-i-1][size-j-1]){
                    t = 0;
                }
            }
        }
        if(t == 1){
            cout << "Symmetric!" << endl;
        }
        else{
            cout << "Non-Symmetric!" <<endl;
        }
    }
    
}
