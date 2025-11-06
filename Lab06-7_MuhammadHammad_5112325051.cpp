#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int value);
int binarySearch(int arr[], int n, int value);
void selectionSort(int arr[], int n);

int main() {
    int arr[] = {43, 23, 15, 7, 3, 34, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Sorting before Binary Search
    selectionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Enter value to search: ";
    cin >> value;

    // Perform Linear Search
    int linearResult = linearSearch(arr, n, value);

    // Perform Binary Search (on sorted array)
    int binaryResult = binarySearch(arr, n, value);

    if (linearResult != -1)
        cout << "Linear Search: Value found at index " << linearResult << endl;
    else
        cout << "Linear Search: Value not found\n";

    if (binaryResult != -1)
        cout << "Binary Search: Value found at index " << binaryResult << endl;
    else
        cout << "Binary Search: Value not found\n";

    return 0;
}

// Function for Linear Search
int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

// Function for Binary Search (requires sorted array)
int binarySearch(int arr[], int n, int value) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Function for Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
