#include<iostream>
using namespace std;

int main()
{
    // Take matrix as input
    int rows, col; // For order of the matrix
    cout<<"Enter number of rows: ";
    cin >> rows;
    cout<<"Enter number of coloumns: ";
    cin >> col;
    int matrix[rows][col];
    cout<<"Enter values of the matrix: "<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }
    
    // Taking transpose
    int t_matrix[rows][col];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            t_matrix[j][i] = matrix[i][j];
        }
    }
    
    // Displaying the matrices
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            t_matrix[j][i] = matrix[i][j];
        }
    }
}
