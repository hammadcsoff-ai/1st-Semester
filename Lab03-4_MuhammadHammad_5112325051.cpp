// Develop a function to find the maximum of two numbers
#include<iostream>
using namespace std;

// Declaring the function
int find_Maximum(int m, int n);

int main(){
    // Declaring integers
    int m, n;
    
    // Taking input from the user
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    // Displaying maximum using function
    cout<<"Maximum is "<<find_Maximum(m, n)<<endl;
    
    return 0;
}

// Function for finding maximum
int find_Maximum(int m, int n){
    return (m > n) ? m : n;
}
