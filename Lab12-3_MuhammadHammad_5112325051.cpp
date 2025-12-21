#include<iostream>
using namespace std;

// Function prototypes
float ave(int arr[], int size);
float ave(float arr[], int size);

int main()
{
    // Integer array of 5 size
    int int_arr[5] = {4, 6, 8, 11, 12};
    // Float array of 5 size
    float float_arr[5] = {2.3, 4.4, 5.7, 2.4, 8.3};
    
    // Displaying results
    cout<<"Average of integer array: "<<ave(int_arr, 5)<<endl;
    cout<<"Average of float array: "<<ave(float_arr, 5)<<endl;
    
    return 0;
}

// Function for average of integer array
float ave(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    
    return (float) sum / size;
}

// Function for average of float array
float ave(float arr[], int size){
    float sum = 0.0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    
    return sum / size;
}
