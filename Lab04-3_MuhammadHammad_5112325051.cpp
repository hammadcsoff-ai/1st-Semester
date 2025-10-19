// Write a program for a vending machine
#include <iostream>
using namespace std;

int main()
{
    // Items and their prizes
    string items[5][2] = {{"Lays", "20"}, {"Gala", "15"}, {"Cola", "17"}, {"item4", "40"}, {"item5", "74"}};
    string shopping[5];
    int code;
    int item_count = 0;
    // Available coins
    int penny = 1;
    int fifer = 5;
    int tenner = 10;
    int quarter = 25;
    
    // Displaying menu
    cout<<"\tAvailable Items"<<endl;
    cout<<"Code\tItem\t\tPrice"<<endl;
    cout<<"__________________________"<<endl;
    for (int i = 0; i < 5; i++){
        cout<<i+1<<"\t\t"<<items[i][0]<<"\t\t"<<items[i][1]<<endl;
    }
    
    // Prompt the user to select items
    while(true){
        cout<<"\nYour order: ";
        for (string item : shopping){
            cout<<item<<", ";
        }
        cout<<"\nWhat would you like to add please?"<<endl;
        cout<<"Enter the code for item or 0 to proceed to payment: ";
        cin >> code;
        if (code == 0){
            break;
        }
        shopping[item_count] = items[code - 1][0];
        item_count++;
    }
}
