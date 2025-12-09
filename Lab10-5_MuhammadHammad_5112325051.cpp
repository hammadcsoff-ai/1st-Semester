#include<iostream>
using namespace std;

int main()
{
    // Data structure for students
    struct Student{
        string name;
        int reg_no;
        string department;
        float cgpa;
    };
    
    // calculating size using sizeof
    int size = sizeof(Student);
    
    // Displaying
    cout<<"The size of Student datatype is "<<size<<endl;
    
    return 0;
}
