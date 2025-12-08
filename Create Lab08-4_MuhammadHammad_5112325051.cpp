#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Declaring string
    string full_name;
    
    // Input using function
    getline(cin, full_name);
    
    // Finding the length
    int size = full_name.length();
    
    // Displaying
    cout<<"The name "<<full_name<<" has "<<size<<" characters including the space."<<endl;
    
    return 0;
}
