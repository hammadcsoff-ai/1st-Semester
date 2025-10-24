// Write a program to generate factorial
#include<iostream>
using namespace std;

int main()
{
    // Declaring necessary variables
    int num;
    int fact = 1;
    
    // Taking the number as input
    cout<<"Enter a number: ";
    cin >> num;
    
    // Calculating the factorial
    for (int i = num; i > 0; i--){
        fact *= i;
    }
    
    // Displaying the answer
    cout<<"The factorial of "<<num<<" is "<<fact<<"."<<endl;
}
