// Develop a program that takes user input for age as a string, converts it to an integer, and checks if the user is eligible to vote
#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Declaring necessary variables
    string Age;
    int age;
    
    // Taking user's age as input
    cout<<"How old are you? ";
    cin >> Age;
    
    // Typecasting age into integer
    age = stoi (Age);
    
    // Checking eligibility to vote
    if (age >= 18){
        cout<<"You are eligible to cast a vote."<<endl;
    }
    else{
        cout<<"You are not eligible to cast a vote yet."<<endl;
    }
    
    // Return 0 on successful execution
    return 0;
}
