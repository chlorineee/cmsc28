/* Written by: Cherlie Palarpalar 
CMSC 28 - Class Implementation */

#include <iostream> 
#include "Book.h"       // Include the Book header file

using namespace std;    // Use the standard namespace

// Function to update book details
void updateBookDetails(Book &book) {
    cout << "\nUpdate book details:" << endl;   // Prompt the user to update book details
    cout << "[1] Title" << endl;                // Print the option for updating the title
    cout << "[2] Author" << endl;               // Print the option for updating the author
    cout << "[3] ISBN" << endl;                 // Print the option for updating the ISBN
    cout << "[4] Publisher" << endl;            // Print the option for updating the publisher

    int choice;
    cout << "Enter choice: ";                   // Prompt the user to enter their choice
    cin >> choice;                              // Read the user's choice from the input

    if (choice == 1) {                          // If the choice is 1
        string title;
        cout << "Enter new title: ";            // Prompt the user to enter the new title
        cin.ignore();                           // Ignore any remaining characters in the input buffer
        getline(cin, title);                    // Read the new title from the input
        book.setTitle(title);                   // Update the book's title
    } else if (choice == 2) {                   // If the choice is 2
        string author;
        cout << "Enter new author: ";           // Prompt the user to enter the new author
        cin.ignore();                           // Ignore any remaining characters in the input buffer
        getline(cin, author);                   // Read the new author from the input
        book.setAuthor(author);                 // Update the book's author
    } else if (choice == 3) {                   // If the choice is 3
        string isbn;
        cout << "Enter new ISBN: ";             // Prompt the user to enter the new ISBN
        cin.ignore();                           // Ignore any remaining characters in the input buffer
        getline(cin, isbn);                     // Read the new ISBN from the input
        book.setISBN(isbn);                     // Update the book's ISBN
    } else if (choice == 4) {                   // If the choice is 4
        string publisher;
        cout << "Enter new publisher: ";        // Prompt the user to enter the new publisher
        cin.ignore();                           // Ignore any remaining characters in the input buffer
        getline(cin, publisher);                // Read the new publisher from the input
        book.setPublisher(publisher);           // Update the book's publisher
    } else {                                    // If the choice is not 1, 2, 3, or 4
        cout << "Invalid choice." << endl;      // Print an error message
    }
}

// Function to display book details
void displayBookDetails(Book book) {
    cout << "\nBook details:" << endl;                      // Print a message to indicate that book details are being displayed
    cout << "Title: " << book.getTitle() << endl;           // Print the book's title
    cout << "Author: " << book.getAuthor() << endl;         // Print the book's author
    cout << "ISBN: " << book.getISBN() << endl;             // Print the book's ISBN
    cout << "Publisher: " << book.getPublisher() << endl;   // Print the book's publisher
}

// Function to thank user for using the program
void thankUser() {
    cout << "\nThank you for using my program!\n"; // Print a thank you message
}

int main() {
    string title, author, isbn, publisher;

    cout << "Enter book details:" << endl;  // Prompt the user to enter book details
    cout << "Title: ";
    getline(cin, title);                    // Read the book's title from the input
    cout << "Author: ";
    getline(cin, author);                   // Read the book's author from the input
    cout << "ISBN: ";
    getline(cin, isbn);                     // Read the book's ISBN from the input
    cout << "Publisher: ";
    getline(cin, publisher);                // Read the book's publisher from the input

    Book Book_1(title, author, isbn, publisher); // Create a Book object with the entered details

    displayBookDetails(Book_1);                 // Display the book details

    while (true) {
        cout << "\nDo you want to update book details? (Y/N): ";    // Prompt the user to choose whether to update book details
        char choice;
        cin >> choice;                                              // Read the user's choice from the input

        if (choice == 'Y' || choice == 'y') {                       // If the choice is 'Y' or 'y'
            updateBookDetails(Book_1);                              // Update the book details
            displayBookDetails(Book_1);                             // Display the updated book details
        } else if (choice == 'N' || choice == 'n') {                // If the choice is 'N' or 'n'
            break;                                                  // Exit the loop
        } else {                                                    // If the choice is neither 'Y' nor 'N'
            cout << "Invalid choice." << endl;                      // Print an error message
        }
    }

    thankUser();    // Thank the user for using the program
    
    return 0;   
}