// Create a one dimensional array of characters and store a string inside it by reading from standard input
#include<iostream>
using namespace std;

int main()
{
    char name[15];
    cout<<"Enter your name: ";
    cin >> name;
    
    cout<<"Hello, "<<name<<endl;

    return 0;
}
