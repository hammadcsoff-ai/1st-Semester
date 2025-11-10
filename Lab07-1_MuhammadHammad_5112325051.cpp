#include<iostream>
using namespace std;

int main()
{
    // Declare a 2D array to store District name, sales and month
    string data[4][3];


  // Taking data as input from the user
    for (int i = 0; i < 4; i++){
        cout<<"Enter data of District "<<i + 1<<endl;
        cout<<"District name: ";
        cin >> data[i][0];
        cout<<"Number of sales: ";
        cin >> data[i][1];
        cout<<"Upto the Month: ";
        cin >> data[i][2];
    }

  // Displaying the data
    for (int i = 0; i < 4; i++){
        cout<<data[i][0]<<" had "<<data[i][1]<<" sales upto "<<data[i][2]<<endl;
    }
    
    return 0;
}
