// Design a function to convert celsius into fahrenheit
#include<iostream>
using namespace std;

int convert(int x, int method);

int main()
{
    // Asking user for conversion method
    int m, given;
    do{
        cout<<"1 for Celsius to Fahrenheit, 2 for Fahrenheit to Celsius: ";
        cin >> m;
    }
    while (m == 0 && m != 1);
    
    // Using the conversion 
    if (m == 1){
        cout<<"Celsius: ";
        cin >> given;
        cout<<"Fahrenheit: "<<convert(given, m)<<endl;
    }
    else{
        cout<<"Fahrenheit: ";
        cin >> given;
        cout<<"Celsius: "<<convert(given, m)<<endl;
    }
    
    return 0;
}

int convert(int x, int method){
    if (method == 1){
        return (x * 9/5) + 32;
    }
    else{
        return (x - 32) * 5/9;
    }
}
