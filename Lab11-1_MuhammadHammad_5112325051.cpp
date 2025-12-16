// Write a function to calculate the factorial of a given number
#include<iostream>
using namespace std;

int fac(int a);

int main()
{
    // Taking positive input
    int n;
    do{
        cout<<"Enter a positive number: ";
        cin >> n;
    }
    while(n < 1);
    
    // Calculate and display factorial
    cout<<"The factorial is "<<fac(n)<<endl;
    
    return 0;
}

// Using recursive function to find factorial
int fac(int a){
    if (a == 1){
        return a;
    }
    return a * fac(a - 1);
}
