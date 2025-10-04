// Write a code to display the decimal value of 11101010
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int convert(string binary);

int main(){
  // Secures the binary digit
  string binary = "11101010";

  // Convert binary into decimal
  int deci = convert(binary);

  // Prints the decimal number
  cout<<deci<<endl;

  return 0;
}

int convert(string binary){
  // Int variable to store deimal digit
  int deci = 0;
  // Number of digits in the binary number
  int len = binary.length();

  // Reference for converting char into integer
  int ascii = '0';

  for (int i = 0, j = len-1; i < len-1; i++, j--){
    // Converting digits of the binary number from chars to integers
    int y = binary[i] - ascii;
    // Mathematical calculations
    int x = ((int) pow(2 , j)) * y;
    deci += x;
  }

  return deci;
}
