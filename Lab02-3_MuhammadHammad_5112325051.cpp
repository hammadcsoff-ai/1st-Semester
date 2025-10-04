// Develop a code that displays your favourite quote using input and output statements
#include<iostream>
#include<string>
using namespace std;

int main () {
  // Declaring variable to store the quote
  string quote;

  // Taking a quote as in input
  cout<<"Enter your favourite quote: ";
  getline(cin, quote);

  // Printing out the quote
  cout<<"Your favourite quote is, \""<<quote<<"\""<<endl;
  
  // Return 0 if executed successfully
  return 0;
}
