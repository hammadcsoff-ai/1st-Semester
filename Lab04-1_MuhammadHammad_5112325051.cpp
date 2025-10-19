// Write a program that finds the highest number of 3 numbers
#include<iostream>
using namespace std;

int main()
{
    // Declaring the necessary variables
    int a, b, c, highest;
    
    // Taking values as input
    cout<<"Enter three numbers: "<<endl;
    cin >> a >> b >> c;
    
    // Finding highest using nested if-else
    if (a >= c){
        if (a >= b){
            highest = a;
        }
        else{
            highest = b;
        }
    }
    else{
        if (b >= c){
            highest = b;
        }
        else{
            highest = c;
        }
    }
    
    // Display the highest number
    cout<<endl;
    cout<<highest<<" is the highest number."<<endl;
    
    return 0;
}
