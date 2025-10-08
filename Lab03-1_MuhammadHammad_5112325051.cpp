// Implement a function that performs basic mathematical operations on two numbers
#include <iostream>
using namespace std;

int calc(int a, int b, char c);

int main()
{
    // Declaring necessary variables
    int a, b, ans;
    char c;
    
    // Taking input from the user
    cout<<"Enter the first number: ";
    cin >> a;
    cout<<"Enter an operator(+, -, *, /, %): ";
    cin >> c;
    cout<<"Enter the second number: ";
    cin >> b;
    
    // Calling function on the input
    ans = calc(a, b, c);
    
    // Displaying the answer
    cout<<"The answer is "<<ans<<endl;
}

// Function to perform the calculations
int calc(int a, int b, char c)
{
    switch (c) 
    {
        case '+':       // Addition
            return a + b;
        case '-':       // Subtraction
            return a - b;
        case '*':       // Multiplication
            return a * b;
        case '/':       // Division
            return a / b;
        case '%':       // Remainder
            return a % b;
        default:        // Wrong operator
            cout<<"Unknown Operator!";
            return 0;
    }
}
