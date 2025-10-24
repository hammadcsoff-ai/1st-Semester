// Write a program to print the pattern using nested for loop
#include<iostream>
using namespace std;

int main()
{
    // Declaring the variable to store the number of rows
    int row;
    
    // Taking the number of rows as an input
    cout<<"Enter the number of rows: ";
    cin >> row;
    
    // Displaying the pattern
    for (int i = 1; i <= row; i++){
        for (int j = i; j > 0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    // Return 0 if executed successfully
    return 0;
}
