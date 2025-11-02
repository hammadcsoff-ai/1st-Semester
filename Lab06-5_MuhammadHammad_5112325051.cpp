// Write a program to take input into two arrays and then add them in the third
#include<iostream>
using namespace std;

int main()
{
    // Declaring variables 
    string students[5] = {"Hammad", "Ikram", "Salar", "Haris", "Hasnain"};
    int theory[5];
    int pract[5];
    int total[5];
    
    // Taking marks as input
    cout<<"Enter marks of students in theory and practical."<<endl;
    for (int i = 0; i < 5; i++){
        cout<<"Marks of "<<students[i]<<endl;
        cout<<"Theory: ";
        cin >> theory[i];
        cout<<"Practical: ";
        cin >> pract[i];
        cout<<endl;
    }
    
    // Adding the marks and storing them in a third array
    for (int i = 0; i < 5; i++){
        total[i] = theory[i] + pract[i];
    }
    
    // Displaying total marks
    for (int i = 0; i < 5; i++){
        cout<<"Total marks of "<<students[i]<<" : "<<total[i]<<endl;
    }
    
    return 0;
}
