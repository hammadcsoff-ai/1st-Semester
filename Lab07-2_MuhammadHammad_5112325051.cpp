#include<iostream>
using namespace std;

int main()
{
    // Take matrices as input
    int rows, col; // For order of the matrices
    cout<<"Enter number of rows: ";
    cin >> rows;
    cout<<"Enter number of coloumns: ";
    cin >> col;
    int x[rows][col], y[rows][col];
    cout<<"Enter values of first matrix: "<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cin >> x[i][j];
        }
    }
    cout<<"\nEnter values of second matrix: "<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cin >> y[i][j];
        }
    }
    
    // Adding the matrices
    int sum[rows][col];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            sum[i][j] = x[i][j] + y[i][j];
        }
    }
    
    // Displaying the result
    cout<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cout<<x[i][j]<<" ";
        }
        if (i == ((rows-1)/2)){
            cout<<" + ";
        }
        else{
            cout<<"   ";
        }
        for (int j = 0; j < col; j++){
            cout<<y[i][j]<<" ";
        }
        if (i == ((rows-1)/2)){
            cout<<" = ";
        }
        else{
            cout<<"   ";
        }
        for (int j = 0; j < col; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
