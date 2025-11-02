// Write a program to take age of 5 persons and then display them
#include<iostream>
using namespace std;

int main()
{
    // Declaring variables and taking inputs
    string persons[5] = {"Hammad", "Ikram", "Salar", "Haris", "Hasnain"};
    int age[5];
    cout<<"Enter the age of each person."<<endl;
    for (int i = 0; i < 5; i++){
        cout<<persons[i]<<" : ";
        cin >> age[i];
    }
    
    // Displaying the age of each person
    cout<<endl;
    for (int i = 0; i < 5; i++){
        cout<<persons[i]<<" is "<<age[i]<<" years old."<<endl;
    }
    
    return 0;
}
