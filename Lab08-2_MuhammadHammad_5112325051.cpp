// Write a program to switch character strings if not equal
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[15], str2[15];
    cout<<"Theory teacher: ";
    cin >> str1;
    cout<<"Lab teacher: ";
    cin >> str2;
    
    if (strcmp(str1, str2)){
        swap(str1, str2);
        cout<<str1<<" will teach theory."<<endl;
        cout<<str2<<" will teach lab."<<endl;
    }
    else{
        cout<<"Both are the same!"<<endl;
    }
    
    return 0;
}
