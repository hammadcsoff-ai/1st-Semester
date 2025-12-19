#include<iostream>
#include<string>
using namespace std;

// Function prototypes
void count(string line, int &vowel_count);
void count(string line, int &vowel_count, int &consonant_count);

int main()
{
    // Taking input
    string str;
    cout<<"Write something: ";
    getline(cin, str);
    
    // Declaring variables to keep count
    int vowel_count, consonant_count;
    
    // First function
    cout<<"After first function"<<endl;
    count(str, vowel_count);
    cout<<"Vowels: "<<vowel_count<<endl;
    
    // Second function
    cout<<"After second fuction"<<endl;
    count(str, vowel_count, consonant_count);
    cout<<"Vowels: "<<vowel_count<<"\nConsonants: "<<consonant_count<<endl;
}


// Function to find the number of vowels
void count(string line, int &vowel_count){
    vowel_count = 0;
    for(char c: line){
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowel_count++;
        }
    }
}

// Function to find the number of vowels and consonants
void count(string line, int &vowel_count, int &consonant_count){
    vowel_count = 0;
    consonant_count = 0;
    for(char c: line){
        if(isalpha(c)){
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vowel_count++;
            }
            else{
                consonant_count++;
            }
        }
    }
}
