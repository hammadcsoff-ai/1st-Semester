// Write a function that takes two boolean values and implement logical AND and logical OR operations on them
#include<iostream>
using namespace std;

// Declaring the function
void logical_Operations(bool x, bool y);

int main()
{
    // Declaring boolean variables
    bool x, y;
    
    // Taking boolean values as input
    cout<<"Enter 1 for true, 0 for false."<<endl;
    cout<<"Enter the value of x: ";
    cin >> x;
    cout<<"Enter the value of y: ";
    cin >> y;
    
    // Showing entered values
    cout << boolalpha;
    cout << "\nx is " << x << "\ny is " << y << endl << endl;
    
    // Calling the function
    logical_Operations(x, y);

    return 0;
}

// Function to implement logical AND and logical OR operations on boolean variables
void logical_Operations(bool x, bool y) {
    cout << "x AND y are " << (x && y) << endl;
    cout << "x OR y is " << (x || y) << endl;
}
