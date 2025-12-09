#include<iostream>
using namespace std;

int main()
{
    // Creating a data structure for employee
    struct Employee{
        int id;
        string name;
        string department;
    };
    
    // Initializing the value of three employees
    Employee list[3] = {
        {368, "Muhammad Ikram", "Information Technology"},
        {369, "Haris Shehzad ", "Human Resource"},
        {370, "Salar Ahmed   ", "Sales"}
    };
    
    // Displaying
    cout<<"Company ID\t\tEmployee Name\t\tDepartment"<<endl;
    cout<<"_____________________________________________________"<<endl;
    for(int i = 0; i < 3; i++){
        cout<<list[i].id<<"\t\t\t\t"<<list[i].name<<"\t\t"<<list[i].department<<endl;
    }
    
    return 0;
}
