#include<iostream>
using namespace std;

// Function prototypes
int volume(int l);
float volume(int r, int h);

int main()
{
    // Taking inputs
    int l, r, h;
    cout<<"Length of cube: ";
    cin >> l;
    cout<<"Radius of cylinder: ";
    cin >> r;
    cout<<"Height of cylinder: ";
    cin >> h;
    
    // Calculating and displaying
    cout<<"The volume of cube is "<<volume(l)<<endl;
    cout<<"The volume of cylinder is "<<volume(r, h)<<endl;
    
    return 0;
}

// Function for volume of cube
int volume(int l){
    return l*l*l;
}

// Function for volume of cylinder
float volume(int r, int h){
    const float pie = 22.0 / 7;
    return pie*r*r*h;
}
