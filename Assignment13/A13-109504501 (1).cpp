/*
 * Assignment 13
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include<iostream>
#include<fstream>

using namespace std;
// C++ program to implement
// the above approach


// Function to check if all elements
// of the board[][] array store
// value in the range[1, 9]
bool isinRange(int board[][9])
{

    // Traverse board[][] array
    for (int i = 0; i < 9;
        i++) {
        for (int j = 0; j < 9;
            j++) {

            // Check if board[i][j]
            // lies in the range
            if (board[i][j] <= 0 || board[i][j] > 9) {
                return false;
            }
        }
    }
    return true;
}

// Function to check if the solution
// of sudoku puzzle is valid or not
bool isValidSudoku(int board[][9])
{
    // Check if all elements of board[][]
    // stores value in the range[1, 9]
    if (isinRange(board)
        == false) {
        return false;
    }

    // Stores unique value
    // from 1 to N
    bool unique[9 + 1];

    // Traverse each row of
    // the given array
    for (int i = 0; i < 9; i++) {

        // Initialize unique[]
        // array to false
        memset(unique, false,
            sizeof(unique));

        // Traverse each column
        // of current row
        for (int j = 0; j < 9;
            j++) {

            // Stores the value
            // of board[i][j]
            int Z = board[i][j];

            // Check if current row
            // stores duplicate value
            if (unique[Z]) {
                return false;
            }
            unique[Z] = true;
        }
    }

    // Traverse each column of
    // the given array
    for (int i = 0; i < 9; i++) {

        // Initialize unique[]
        // array to false
        memset(unique, false,
            sizeof(unique));

        // Traverse each row
        // of current column
        for (int j = 0; j < 9;
            j++) {

            // Stores the value
            // of board[j][i]
            int Z = board[j][i];

            // Check if current column
            // stores duplicate value
            if (unique[Z]) {
                return false;
            }
            unique[Z] = true;
        }
    }
    
    // Traverse each block of
    // size 3 * 3 in board[][] array
    for (int i = 0; i < 9 - 2; i += 3) {

        // j stores first column of
        // each 3 * 3 block
        for (int j = 0; j < 9 - 2;
            j += 3) {

            // Initialize unique[]
            // array to false
            memset(unique, false,
                sizeof(unique));

            // Traverse current block
            for (int k = 0; k < 3;
                k++) {

                for (int l = 0; l < 3;
                    l++) {

                    // Stores row number
                    // of current block
                    int X = i + k;

                    // Stores column number
                    // of current block
                    int Y = j + l;

                    // Stores the value
                    // of board[X][Y]
                    int Z = board[X][Y];

                    // Check if current block
                    // stores duplicate value
                    if (unique[Z]) {
                        return false;
                    }
                    unique[Z] = true;
                }
            }
        }
    }

    // If all conditions satisfied
    return true;
}

// Driver Code
int main()
{
    int x = 1;
    while(x != 4){
        ifstream InFile;
        if(x == 1){
            string file_name = "sudo1.txt";
            InFile.open(file_name, ios::in);
        }
        else if(x == 2){
            string file_name = "sudo2.txt";
            InFile.open(file_name, ios::in);
        }
        else if(x == 3){
            string file_name = "sudo3.txt";
            InFile.open(file_name, ios::in);
        }
        int board[9][9];
        for(int i = 1; i < 10; i++){
            for(int j = 1; j < 10; j++){
                InFile >> board[i][j];
            }
        }
        
        if (isValidSudoku(board)) {
            cout << "sudo" << x << ":" << "Y" << endl;;
        }
        else {
            cout << "sudo" << x << ":" <<  "N" << endl;
        }
        InFile.close();
        x++;
    }
    
    
    return 0;
    
}




