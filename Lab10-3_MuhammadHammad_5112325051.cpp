#include<iostream>
using namespace std;

int main()
{
    // Creating data structure for room size
    struct distance{
        int feet;
        float inches;
    };
    
    // Declaring three rooms
    distance d1, d2, d3;
    
    // Taking input for first room
    cout<<"Size of room 1"<<endl;
    cout<<"Enter feet: ";
    cin >> d1.feet;
    cout<<"Enter inches: ";
    cin >> d1.inches;
    
    // Given values for second room
    d2 = {10, 2.25};
    
    // Calculating for third room as per given conditions
    d3.feet = d1.feet + d2.feet;
    float inches = d1.inches + d2.inches;
    if (inches >= 12){ 
        inches -= 12;
        d3.feet++;
    } // converting inches to foot if applicable
    d3.inches = inches;
    
    // Displaying values
    cout<<endl;
    cout<<"Room 1: "<<d1.feet<<" feet "<<d1.inches<<" inches."<<endl;
    cout<<"Room 2: "<<d2.feet<<" feet "<<d2.inches<<" inches."<<endl;
    cout<<"Room 3: "<<d3.feet<<" feet "<<d3.inches<<" inches."<<endl;
    
    return 0;
}
