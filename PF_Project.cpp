#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure of a Book
struct Book {
    int id;
    string title;
    string author;
    int year;
} library[100];

// Table dimensions
const int totalWidth = 86, idWidth = 10, titleWidth = 30, authorWidth = 25, yearWidth = 8;
int books = 0; // Books count

// Function prototypes
void addBook();
void displayBook();
void searchBook();
void updateBook();
void deleteBook();
void printTableHeader();
void printBookRow(const Book &b);

int main()
{
    int choice;

    do
    {
        cout << "\n========== Library Management System ==========\n"
             << "1. Add Book\n"
             << "2. Display All Books\n"
             << "3. Search Book\n"
             << "4. Update Book\n"
             << "5. Delete Book\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice)
        {
        case 1:
            addBook();
            break;
            
        case 2:
            displayBook();
            break;
            
        case 3:
            searchBook();
            break;
            
        case 4:
            updateBook();
            break;
            
        case 5:
            deleteBook();
            break;
            
        case 0:
            cout << "\nExiting program. Goodbye!\n";
            break;
            
        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}

// Print single book row
void printBookRow(const Book &b) {
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

// Print table header
void printTableHeader() {
    cout << "\n" << string(totalWidth, '=') << endl;
    cout << left
         << setw(idWidth) << "Book ID"
         << "| " << setw(titleWidth) << "Title"
         << "| " << setw(authorWidth) << "Author"
         << "| " << setw(yearWidth) << "Year" << endl;
    cout << string(totalWidth, '=') << endl;
}

// Add a new book
void addBook() {
    Book book;
    cout << "\nAdding book..." << endl;
    cout << "Enter book ID: "; cin >> book.id; cin.ignore(1000, '\n');
    cout << "Title: "; getline(cin, book.title);
    cout << "Author: "; getline(cin, book.author);
    cout << "Year written: "; cin >> book.year;

    library[books++] = book;
    cout << "Book added successfully!" << endl;
}

// Display all books
void displayBook() {
    printTableHeader();
    for (int i = 0; i < books; i++) {
        printBookRow(library[i]);
    }
    cout << "\nTotal Books: " << books << endl;
    cout << string(totalWidth, '=') << endl;
}

// Search for books
void searchBook() {
    int choice, count = 0;
    string keyword;
    int id, year;
    bool headerPrinted = false;

    cout << "\nSearch Book By:"
         << "\n1. Book ID"
         << "\n2. Title"
         << "\n3. Author"
         << "\n4. Year"
         << "\nEnter your choice: ";
    cin >> choice;
    cin.ignore(1000, '\n');

    switch (choice)
    {
    case 1:
        cout << "Enter Book ID: "; cin >> id;
        for (int i = 0; i < books; i++)
            if (library[i].id == id) {
                if (!headerPrinted) {
                    printTableHeader();
                    headerPrinted = true;
                }
                
                printBookRow(library[i]);
                count++;
            }
        break;

    case 2:
        cout << "Enter Title keyword: "; getline(cin, keyword);
        for (int i = 0; i < books; i++)
            if (library[i].title.find(keyword) != string::npos) {
                if (!headerPrinted) {
                    printTableHeader();
                    headerPrinted = true;
                }
                
                printBookRow(library[i]);
                count++;
            }
        break;

    case 3:
        cout << "Enter Author keyword: "; getline(cin, keyword);
        for (int i = 0; i < books; i++)
            if (library[i].author.find(keyword) != string::npos) {
                if (!headerPrinted) {
                    printTableHeader();
                    headerPrinted = true;
                }
                
                printBookRow(library[i]);
                count++;
            }
        break;

    case 4:
        cout << "Enter Year: "; cin >> year;
        for (int i = 0; i < books; i++)
            if (library[i].year == year) {
                if (!headerPrinted) {
                    printTableHeader();
                    headerPrinted = true;
                }
                
                printBookRow(library[i]);
                count++;
            }
        break;

    default:
        cout << "Invalid choice!\n"; return;
    }

    if (count == 0) {
        cout << "\nNo books found.\n";
    }
    else {
        cout << "\nTotal books found: " << count << endl;
    }
    
    if (headerPrinted){
        cout << string(totalWidth, '=') << endl;
    }
}

// Update book
void updateBook() {
    int id;
    string newTitle, newAuthor;
    string yearInput;
    int newYear;
    bool found = false;
    cout << "\nEnter Book ID to update: "; cin >> id; cin.ignore(1000, '\n');

    for (int i = 0; i < books; i++) {
        if (library[i].id == id) {
            found = true;
            cout << "\nCurrent Details:\n";
            printTableHeader();
            printBookRow(library[i]);
            cout << string(totalWidth, '=') << endl;

            cout << "\nEnter new details (press Enter to skip):\n";
            cout << "New Title: ";
            getline(cin, newTitle);
            if (!newTitle.empty()) {
                library[i].title = newTitle;
            }
            
            cout << "New Author: ";
            getline(cin, newAuthor);
            if (!newAuthor.empty()) {
                library[i].author = newAuthor;
            }
            
            cout << "New Year: ";
            getline(cin, yearInput);
            if (!yearInput.empty()) {
                library[i].year = stoi(yearInput);
            }

            cout << "\nBook record updated successfully.\n";
            break;
        }
    }
    
    if (!found) cout << "\nBook with ID " << id << " not found.\n";
}

// Delete book
void deleteBook() {
    int id;
    bool found = false;
    char confirm;
    
    cout << "\nEnter Book ID to delete: ";
    cin >> id;

    for (int i = 0; i < books; i++) {
        if (library[i].id == id) {
            found = true;
            cout << "\nBook Found:\n";
            printTableHeader();
            printBookRow(library[i]);
            cout << string(totalWidth, '=') << endl;

            cout << "\nAre you sure you want to delete this book? (y/n): ";
            cin >> confirm;
            
            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < books - 1; j++) {
                    library[j] = library[j + 1];
                }
                books--;
                cout << "\nBook deleted successfully."<<endl;
            }
            else {
                cout << "\nDeletion cancelled.\n";
            }
            break;
        }
    }

    if (!found) cout << "\nBook with ID " << id << " not found.\n";
}
