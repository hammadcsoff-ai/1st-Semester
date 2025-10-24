// Write a program for a vending machine
#include <iostream>
using namespace std;

int main()
{
    // Items and their prices (in cents)
    string items[5] = {"Lays", "Gala", "Cola", "Item4", "Item5"};
    int prices[5] = {20, 15, 17, 40, 74};

    int code, amountInserted = 0, coin;
    char choice;
    
    // Displaying menu
    cout << "\t=== Available Items ===" << endl;
    cout << "Code\tItem\t\tPrice (cents)" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "\t" << items[i] << "\t\t" << prices[i] << endl;
    }

    // Prompt the user to select an item
    cout << "\nEnter the code of the item you want to buy: ";
    cin >> code;

    // Validate item code
    if (code < 1 || code > 5) {
        cout << "Invalid item code! Transaction cancelled." << endl;
        return 0;
    }

    int price = prices[code - 1];
    cout << "You selected " << items[code - 1] << " costing " << price << " cents." << endl;

    cout << "\nInsert coins (Accepted: 1, 5, 10, 25). Enter 0 when done.\n";

    // Coin insertion loop
    while (amountInserted < price) {
        cout << "Current balance: " << amountInserted << " cents. Insert coin: ";
        cin >> coin;

        switch (coin) {
            case 0:
                if (amountInserted < price) {
                    cout << "Not enough money inserted. Transaction cancelled." << endl;
                    return 0;
                }
                break;
            case 1:
            case 5:
            case 10:
            case 25:
                amountInserted += coin;
                break;
            default:
                cout << "Invalid coin! Please insert 1, 5, 10, or 25 cents only." << endl;
                break;
        }
    }

    // Check payment status
    if (amountInserted >= price) {
        int change = amountInserted - price;
        cout << "\nDispensing " << items[code - 1] << "..." << endl;
        if (change > 0)
            cout << "Returning change: " << change << " cents." << endl;
        cout << "Thank you for your purchase!" << endl;
    } else {
        cout << "Insufficient amount inserted. Transaction failed." << endl;
    }

    return 0;
}
