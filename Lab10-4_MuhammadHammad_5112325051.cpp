#include<iostream>
using namespace std;

int main()
{
    // Creating phone number structure
    struct phone{
        int area_code;
        int exchange;
        int number;
    };
    
    // Declaring phone variables
    phone p1, p2;
    
    // Taking input
    cout<<"Enter your area code, exchange, and number: ";
    cin >> p1.area_code >> p1.exchange >> p1.number;
    
    // Initializing the second one
    p2 = {251, 575, 1111};
    
    // Displaying the numbers
    cout<<"Your phone number is ("<<p1.area_code<<") "<<p1.exchange<<"-"<<p1.number<<endl;
    cout<<"My phone number is ("<<p2.area_code<<") "<<p2.exchange<<"-"<<p2.number<<endl;
    
    return 0;
}
