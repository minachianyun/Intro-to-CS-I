/*
 * Practice 11
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int size = 0;
    char s;
    string p;
    while(size != -1){
        cin >> size;
        if(size == -1){
            break;
        }
        for(int i = 0; i < size; i++){
            cin >> p[i];
        }
        set<char> t1;
        for(int i = 0; i < size; i++){
            t1.insert(p[i]);
        }
        for(auto j = t1.begin(); j != t1.end(); j++){
            cout << *j << " ";
        }
        cout << endl;
        cin >> s;
        auto j = t1.begin();
        int tf = 0;
        for(int i = 0; i < t1.size(); i++){
            if( *j == s){
                cout << i << endl << endl;
                tf = 1;
                break;
            }
            j++;
        }
        if(tf == 0){
            cout << "-1" << endl << endl;
        }
    }
}
