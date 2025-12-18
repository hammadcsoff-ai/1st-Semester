#include<iostream>
using namespace std;

int area(int length, int width);

int main()
{
    // Declaring and taking inputs
    int len, wid, areA;
    cout<<"Length: ";
    cin >> len;
    cout<<"Width: ";
    cin >> wid;
    
    // Calling function
    areA = area(len, wid);
    
    // Displaying result
    cout<<"The area is "<<areA;
    
    return 0;
}

int area(int length, int width){
    return length * width;
}
