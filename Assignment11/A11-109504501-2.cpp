/*
 * Assignment 11
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s = "";
    while(s != "-1"){
        cin >> s;
        if(s == "-1"){
            cout << "\n";
            break;
        }
        int n = s.size();
     
        //Table table[i][j] is true if the string from  i index to j index is a palindrome
        bool table[n][n];
        //Initializing all contents of the table to 0
        memset(table, 0, sizeof(table));
     
        // All substrings of length 1 are palindromes
        int maxLength = 1;
        for (int i = 0; i < n; ++i)
            table[i][i] = true;
     
        // check for sub-string of length 2.
        int start = 0;
        for (int i = 0; i < n-1; ++i)
        {
            if (s[i] == s[i+1])
            {
                table[i][i+1] = true;
                start = i;
                maxLength = 2;
            }
        }
     
        // Check for lengths greater than 2. k is length
        // of substring
        for (int k = 3; k <= n; ++k)
        {
            // Fix the starting index
            for (int i = 0; i < n-k+1 ; ++i)
            {
                // Get the ending index of substring from
                // starting index i and length k
                int j = i + k - 1;
     
                // checking for sub-string from ith index to
                // jth index iff s[i+1] to s[j-1] is a
                // palindrome
                if (table[i+1][j-1] && s[i] == s[j])
                {
                    table[i][j] = true;
     
                    if (k > maxLength)
                    {
                        start = i;
                        maxLength = k;
                    }
                }
            }
        }
        if(maxLength == 1){
            cout << "Palindrome not existed!\n";
            cout << "\n";
        }
        else{
            //Printing the longets palindromic substring
            int end = start + maxLength - 1;
            cout<<"Palindrome: ";
            for( int i = start; i <= end; ++i )
            {
                cout<<s[i];
            }
            cout<<endl;
            //Length of the above longest palindromic substring
            cout << "Length: "<< maxLength << "\n" << endl;

        }
        }
    
    return 0;
}

