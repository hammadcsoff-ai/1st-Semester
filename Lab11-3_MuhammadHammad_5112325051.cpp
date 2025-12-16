#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // Taking input
    string word;
    cout<<"Enter a word: ";
    cin >> word;
    
    // Reverse and display
    cout<<"Before reverse: "<<word<<endl;
    reverse(word.begin(), word.end());
    cout<<"After reverse: "<<word<<endl;
    
    return 0;
}
