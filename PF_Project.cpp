#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// Structure of a Book
struct Book{
    int id;
    string title;
    string author;
    int year;
}library[100];

int books = 0;

// Function prototypes
void addBook();
void displayBook();
void searchBook();
void updateBook();
void deleteBook();

int main()
{
    addBook();
    displayBook();
}

// Function to add a book
void addBook(){
    Book book;
    cout<<"Adding book..."<<endl;
    cout<<"Enter book ID: ";
    cin >> book.id;
    cin.ignore(1000, '\n');
    cout<<"Title: ";
    getline(cin, book.title);
    cout<<"Author: ";
    getline(cin, book.author);
    cout<<"Year written: ";
    cin >> book.year;
    
    library[books] = book;
    books++;
}

#include <iostream>
#include <iomanip>
using namespace std;

void displayBook()
{
    const int totalWidth = 86;
    const int idWidth = 10, titleWidth = 30, authorWidth = 25, yearWidth = 8;

    // Top border
    cout << string(totalWidth, '=') << endl;

    // Header
    cout << left
         << setw(idWidth) << "Book ID"
         << "| " << setw(titleWidth) << "Title"
         << "| " << setw(authorWidth) << "Author"
         << "| " << setw(yearWidth) << "Year" << endl;

    // Header separator
    cout << string(totalWidth, '=') << endl;

    // Table rows
    for (int i = 0; i < books; i++)
    {
        Book b = library[i];

        // Truncate title and author if too long
        string title = (b.title.length() > titleWidth - 1)
                       ? b.title.substr(0, titleWidth - 4) + "..."
                       : b.title;

        string author = (b.author.length() > authorWidth - 1)
                        ? b.author.substr(0, authorWidth - 4) + "..."
                        : b.author;

        cout << left
             << setw(idWidth) << b.id
             << "| " << setw(titleWidth) << title
             << "| " << setw(authorWidth) << author
             << "| " << setw(yearWidth) << b.year << endl;
    }

    // Bottom border
    cout << string(totalWidth, '=') << endl;
}

// Function to search for a book;
void searchBook();
