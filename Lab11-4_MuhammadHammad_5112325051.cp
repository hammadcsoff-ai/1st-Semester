#include<iostream>
#include<numeric>
using namespace std;

int main()
{
    // Taking input
    int a, b, gcd_value;
    cout<<"Enter two numbers: ";
    cin >> a >> b;
    
    // Finding GCD using a build-in function
    gcd_value = gcd(a, b);
    
    // Displaying the result
    cout<<"The Greatest Common Divisor is "<<gcd_value<<endl;
    
    return 0;
}
