#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string convert(int x);

int main() {
  // Secures the decimal
  int x = 4182;

  // Converts the decimal into binary
  string binary = convert(x);

  // Prints the binary number
  cout<<binary<<endl;
  
  return 0;
}

// Function to convert decimal into binary
string convert(int x){
  // Empty string to store the binary digits one by one
  string binary = "";
  // Breaking recursion once the number is zero
  if (x == 0) return 0;

  // Mathematical calculations
  while (x > 0){
        int rem = x % 2;
        binary = to_string(rem) + binary;
        x = x / 2;
  }
  return binary;
}
