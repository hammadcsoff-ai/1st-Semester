// Write a program to find the summation of array elements
#include<iostream>
using namespace std;

int main()
{
    // Declaring variables and taking inputs
    int n;
    cout<<"Enter number of subjects: ";
    cin >> n;
    int marks[n];
    cout << "Enter marks of each subject;"<<endl;
    for (int i = 0; i < n; i++){
        cin >> marks[i];
    }
    
    // Finding the sum
    int sum = 0;
    for (int i : marks){
        sum += i;
    }
    
    // Displaying the total marks
    cout<<"Total marks are "<<sum<<endl;
    
    return 0;
}
