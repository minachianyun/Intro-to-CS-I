/*
 * Assignment 9
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    int A_row, A_col, B_row, B_col, i, j, a[10][10], b[10][10], mul[10][10], k;
    cout << "Matrix A size = ";
    cin >> A_row >> A_col;
    cout << "Matrix B size = ";
    cin >> B_row >> B_col;
    
    if (A_col != B_row) {
            cout << "Can't be multiplied" << endl;
    }
    else{
            cout << "Matrix A" << endl;
            for(i = 0; i < A_row; i++){
                    for(j = 0; j < A_col; j++){
                            cin >> a[i][j];
                    }
            }
            cout << "Matrix B" << endl;
            for(i = 0; i < B_row; i++){
                    for(j = 0; j < B_col; j++){
                            cin >> b[i][j];
                    }
            }
            cout << "Multiplication" << endl;
            for(i = 0; i < A_row; i++){
                    for(j = 0; j < B_col; j++){
                            mul[i][j] = 0;
                            for(k = 0; k < B_row; k++){
                                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                            }
                    }
            }
            for(i = 0; i < A_row; i++){
                    for(j = 0; j < B_col; j++){
                            cout << mul[i][j] << " ";
                    }
                    cout << "\n";
            }
           
    }
        
    
    return 0;
}
