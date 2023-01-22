/*
 * Practice 13
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int x = 1;
    while(x != 4){
        ifstream InFile;
        if(x == 1){
            string file_name = "ox1.txt";
            InFile.open(file_name, ios::in);
        }
        else if(x == 2){
            string file_name = "ox2.txt";
            InFile.open(file_name, ios::in);
        }
        else if(x == 3){
            string file_name = "ox3.txt";
            InFile.open(file_name, ios::in);
        }
        
        //ios:in ->open a file for input
        char game[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                InFile >> game[i][j];
            }
        }
        //第一列相同
        if(game[0][0] == game[0][1] and game[0][0] == game[0][2]){
            if(game[0][0] == 'o'){
                cout << "ox" << x << ": " << "Owin" << endl;
            }
            else if(game[0][0] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //第二列相同
        else if(game[1][0] == game[1][1] and game[1][0] == game[1][2]){
            if(game[1][0] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[1][0] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //第三列相同
        else if(game[2][0] == game[2][1] and game[2][0] == game[2][2]){
            if(game[2][0] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[2][0] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //第一行相同
        else if(game[0][0] == game[1][0] and game[0][0] == game[2][0]){
            if(game[0][0] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[0][0] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //第二行相同
        else if(game[0][1] == game[1][1] and game[0][1] == game[2][1]){
            if(game[0][1] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[0][1] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //第三行相同
        else if(game[0][2] == game[1][2] and game[0][2] == game[2][2]){
            if(game[0][2] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[0][2] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //正斜線相同
        else if(game[0][0] == game[1][1] and game[0][0] == game[2][2]){
            if(game[0][0] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[0][0] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        //負斜線相同
        else if(game[0][2] == game[1][1] and game[0][2] == game[2][0]){
            if(game[0][2] == 'o'){
                cout << "ox" << x << ": " <<  "Owin" << endl;
            }
            else if(game[0][2] == 'x'){
                cout << "ox" << x << ": " <<  "Xwin" << endl;
            }
        }
        else{
            cout << "ox" << x << ": " <<  "tie" << endl;
        }
        InFile.close();
        x++;
    }
    
}
