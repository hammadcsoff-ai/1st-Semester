// Write a program to transfer elements from one array to another
#include<iostream>
using namespace std;

int main()
{
    // Declaring variables
    string sectionA[10] = {"Hammad", "Ikram", "Salar", "Haris", "Hasnain", "Naeem", "Shakir", "Saim", "Rayan", "Aman"};
    string sectionB[10];
    
    // Transferring elements
    for (int i = 0; i < 10; i++){
        sectionB[i] = sectionA[i];
    }
    
    // Displaying new array
    cout<<"Students transferred to section B:"<<endl;
    for (string student : sectionB){
        cout<<student<<endl;
    }
    
    return 0;
}
