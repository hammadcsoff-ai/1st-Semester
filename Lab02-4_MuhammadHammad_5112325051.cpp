// Write a program that swaps the values of two variables
#include<iostream>
using namespace std;

int main() {
  // Declaring 2 variables and initializing them
  string teacher = "Miss Maria";
  string queen = "Elizabeth";
  
  // Printing before  swapping
  cout<<teacher<<" is a teacher."<<endl;
  cout<<queen<<" is a queen."<<endl;
  
  // Swapping the values using a temporary variable "temp"
  string temp;
  temp = teacher;
  teacher = queen;
  queen = temp;
  
  // Printing after swapping
  cout<<endl;
  cout<<teacher<<" is a teacher."<<endl;
  cout<<queen<<" is a queen."<<endl;
}
