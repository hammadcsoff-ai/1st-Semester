// Write a program to enter data into an array and also detect if something is in it
#include<iostream>
using namespace std;

int main()
{
    // Declaring variables and taking inputs
    int n;
    cout<<"Enter number of codes: ";
    cin >> n;
    int sub[n];
    cout<<"Enter all the codes:"<<endl;
    for (int i = 0; i < n; i++){
        cin >> sub[i];
    }
    
    // Asking user what to find
    int code;
    cout<<"\nEnter a code to check validity: ";
    cin >> code;
    
    // Checking the validity
    bool valid = false;
    for (int i : sub){
        if (i == code){
            valid = true;
            break;
        }
    }
    
    // Displaying the result
    if (valid){
        cout<<"The code is valid."<<endl;
    }
    else{
        cout<<"The code is invalid."<<endl;
    }
    
    return 0;
}
