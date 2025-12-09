#include<iostream>
using namespace std;

int main()
{
    // Data structure for department
    struct Department{
        string name;
        string employees[10];
    };
    // Data structure for company
    struct Company{
        string name;
        Department departments[3];
    };
    
    // Initializig values
    Company MSS = {
        "MSS ltd.",
        {
            {
                "Information Technology",
                {"Ikram", "Muhammad", "Naeem", "Fahad"}
            },
            {
                "Sales",
                {"Salar", "Jawad", "Shakir"}
            },
            {
                "Human Resource",
                {"Haris"}
            }
        }
    };
    
    // Displaying the data
    cout<<"Company's name: "<<MSS.name<<endl;
    for(int i = 0; i < 3; i++){
        cout<<"Department: "<<MSS.departments[i].name<<endl;
        cout<<"Employees;"<<endl;
        for (int j = 0; j < 10; j++){
            if (!MSS.departments[i].employees[j].empty())  // Avoid printing empty entries
                cout << " - " << MSS.departments[i].employees[j] << endl;
        }
        cout << endl;
    }
    
    return 0;
}
