#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Declaring the strings
    string first, second, mix;
    
    // Taking input
    cout<<"Enter a word: ";
    cin >> first;
    cout<<"Enter another word: ";
    cin >> second;
    
    // Concatenating the strings
    mix = first + second;
    
    // Finding the size
    int size = mix.length();
    
    // Display
    cout<<"The resultant string is "<<mix<<" with a length of "<<size<<endl;
    
    return 0;
}
