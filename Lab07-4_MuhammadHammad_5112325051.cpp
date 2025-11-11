#include <iostream>
using namespace std;

int main()
{
    // Initialising the given array
    int array[5][5] = {
        {5, 7, 9, 11, 0},
        {5, 3, 7, 5, 5},
        {2, 3, 2, 3, 9},
        {3, 6, 88, 45, 78},
        {2, 67, 90, 87, 51}
    };

    // Transfer 2D array to 1D array
    int temp[25];
    int n = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            temp[n] = array[i][j];
            n++;
        }
    }

    // Sorting the array using selection sort
    for (int i = 0; i < 25; i++){
        for (int j = i + 1; j < 25; j++){
            if (temp[j] < temp[i]){
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    // Copy sorted values back to 2D array
    n = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            array[i][j] = temp[n];
            n++;
        }
    }

    // Display Sorted 2D Array
    cout << "Sorted 2D Array:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Searching value
    int key;
    cout << "\nEnter value to search: ";
    cin >> key;

    // Linear Search
    bool found = false;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (array[i][j] == key){
                cout << "\nLinear Search: Found at (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }
    if (!found)
        cout << "\nLinear Search: Not Found\n";

    // Binary Search on sorted 2D array
    int low = 0, high = 24;
    found = false;

    while (low <= high){
        int mid = (low + high) / 2;
        int r = mid / 5;
        int c = mid % 5;

        if (array[r][c] == key){
            cout << "Binary Search: Found at (" << r << ", " << c << ")\n";
            found = true;
            break;
        }
        else if (array[r][c] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        cout << "Binary Search: Not Found\n";

    return 0;
}
