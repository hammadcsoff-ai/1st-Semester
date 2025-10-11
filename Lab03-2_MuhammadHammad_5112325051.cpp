// Write a program to find the largest between two numbers
#include<iostream>
using namespace std;

int main () 
{
    // Declaring both variables
    int x, y;
    
    // Taking numbers as input in those variables
    cout<<"Enter the value of x: ";
    cin >> x;
    cout<<"Enter the value of y: ";
    cin >> y;
    
    // Conditional statements to check which one is greater
    if (x > y) {
        cout<<"x is greater than y."<<endl;
    }
    else if (x < y){
        cout<<"y is greater than x."<<endl;
    }
    else {
        cout<<"Both numbers are equal."<<endl;
    }

    return 0;
}
