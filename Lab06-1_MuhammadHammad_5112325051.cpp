// Write a program for selection sort in array
#include<iostream>
using namespace std;

int main()
{
    // Declaring variables and taking inputs
    int n;
    cout<<"Enter number of students: ";
    cin >> n;
    int marks[n];
    cout << "Enter their marks;"<<endl;
    for (int i = 0; i < n; i++){
        cin >> marks[i];
    }
    
    // Selection sort
    for (int i = 0; i < n-1; i++){
        int max = i;
        for (int j = i + 1; j < n; j++){
            if (marks[j] > marks[max]){
                max = j;
            }
        }
        int temp = marks[i];
        marks[i] = marks[max];
        marks[max] = temp;
    }
    
    // Displaying the sorted list of marks
    cout<<"\nMarks of students from highest to lowest are;"<<endl;
    for (int num : marks){
        cout<<num<<endl;
    }
    
    return 0;
}
