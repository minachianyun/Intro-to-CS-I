/*
 * Practice 8
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N;
    string I;
    float E;
    float M;
    float C;
    int WE;
    int WM;
    int WC;
    cout << "Please input your name : ";
    cin >> N;
    cout << "Please input your student ID : ";
    cin >> I;
    cout << "English score : ";
    cin >> E;
    cout << "Math score : ";
    cin >> M;
    cout << "Chinese score : ";
    cin >> C;
    cout << "English Weight : ";
    cin >> WE;
    cout << "Math weight : ";
    cin >> WM;
    cout << "Chinese weight : ";
    cin >> WC;

    cout << "\n";
    
    cout << "Student name : " << N << endl;
    cout << "Student ID : " << I << endl;
    int AA = (E + M + C) / 3;
    cout << "Arithmetric average : " << AA << endl;
    int WA = ((E * WE) + (M * WM) + (C * WC)) / (WE + WM + WC);
    cout << "Weight average : " << WA << endl; 
    
    cout << "\n";
    
    return 0;
}
