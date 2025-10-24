// Write a program to find the power of any number using for loop
#include<iostream>
using namespace std;

int main()
{
    // Declaring the necessary variables
    int num, power;
    int ans = 1;
    
    // Taking the number and power as input
    cout<<"Enter a number: ";
    cin >> num;
    cout<<"Enter the power: ";
    cin >> power;
    
    // Calculating the power
    for (int i = power; i > 0; i--){
        ans = ans * num;
    }
    
    // Displaying the answer
    cout<<"The answer is "<<ans;
}
