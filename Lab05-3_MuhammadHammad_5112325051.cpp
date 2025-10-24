// Write a program to calculate the sum of Natural Numbers using while loop
#include<iostream>
using namespace std;

int main()
{
    // Declaring neccessary variables
    int num;
    int sum = 0;
    
    // Taking user input and calculating the sum
    do{
        cout<<"The sum is: "<<sum<<endl;
        cout<<"Add a number(Enter 0 to exit): ";
        cin >> num;
        sum+=num;
        cout<<endl;
    } while(num > 0);
    cout<<"The final sum is "<<sum<<endl;
    
    // Return 0 upon successful execution
    return 0;
}
