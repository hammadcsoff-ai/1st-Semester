// Write a program to find the sum of the digits of a number
#include<iostream>
using namespace std;

int main()
{
    // Declaring the number
    string num;
    int sum = 0;
    int i = 0;  // index variable
    
    // Taking the number as input
    cout<<"Enter a number: ";
    cin >> num;
    
    // Calculating the sum
    while (i < num.length()){
        sum += num[i] - '0';
        i++;
    }
    
    // Displaying the sum
    cout<<"The sum of the digits of "<<num<<" is "<<sum<<"."<<endl;
    
    // Return 0 upon successful execution
    return 0;
}
