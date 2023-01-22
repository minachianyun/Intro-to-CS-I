/*
 * Assignment 9
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int first_num, sec_num, third_num;
    cout << "Please key in first number: " << endl;
    cin >> first_num;
    cout << "Please key in second number: " << endl;
    cin >> sec_num;
    cout << "Please key in third number: " << endl;
    cin >> third_num;
    
    if(first_num == sec_num and first_num == third_num){
        cout << "Regular triangle\n" << endl;
    }
    else if(first_num + sec_num <= third_num or first_num + third_num <= sec_num or sec_num + third_num <= first_num){
        cout << "Not triangle\n" << endl;
    }
    else if(first_num == sec_num or first_num == sec_num or sec_num == third_num){
        if(first_num*first_num == sec_num*sec_num + third_num*third_num or sec_num*sec_num == first_num*first_num + third_num*third_num or third_num*third_num == first_num*first_num + sec_num*sec_num){
            cout << "Isosceles right triangle\n" << endl;
        }
        else{
            cout << "Isosceles triangle\n" << endl;
        }
    }
    else if(first_num*first_num == sec_num*sec_num + third_num*third_num or sec_num*sec_num == first_num*first_num + third_num*third_num or third_num*third_num == first_num*first_num + sec_num*sec_num){
        cout << "Right triangle\n" << endl;
    }
    else{
        cout << "Triangle\n" << endl;
    }
    return 0;
}
