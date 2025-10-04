#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
  // Declaring variables
  int x;
  float y;
  char a;

  // Initializing 
  x = 04;
  y = 89.45;
  a = 'H';

  // Printing Values
  cout<<x<<endl;
  cout<<y<<endl;
  cout<<a<<endl;

  // Printing data types
  cout<<"Data type of "<<x<<" is "<<typeid(x).name()<<endl;
  cout<<"Data type of "<<y<<" is "<<typeid(y).name()<<endl;
  cout<<"Data type of "<<a<<" is "<<typeid(a).name()<<endl;
}
