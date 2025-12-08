#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
    // Declaring character string
    char full_name[50];   

    // Taking input using function
    cout<<"Enter your full name: ";
    cin.getline(full_name, 50);

    // Finding the length using function
    int size = strlen(full_name);

    // Displaying
    cout << "The name "<<full_name<<" has "<<size<<" characters including the space."<< endl;

    return 0;
}
