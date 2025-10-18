// Write a program that checks the leap year
#include<iostream>
using namespace std;

int main()
{
    // Declaring necessary variable
    int year;
    
    // Taking the year as input
    cout<<"Enter the year: ";
    cin >> year;
    
    // Checking if it's a leap year using nested if-else
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                cout<<year<<" is a leap year."<<endl;
                return 0; // exit main function
            }
        }
    }
    
    // Incase the above conditions were not true
    cout<<year<<" is not a leap year."<<endl;
    
    return 0;
}
