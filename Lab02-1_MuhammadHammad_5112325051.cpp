// Write a C++ program that prompts the user to input their age and then outputs a message that includes their age.
#include<iostream>
using namespace std;

int main(){
  // Ask user for their age
  cout<<"How old are you? ";
  int x;
  cin >> x;

  // Print a message that includes their age
  cout<<"Congratulations! You have survived "<<x<<" years in Pakistan."<<endl;

  return 0;
}
