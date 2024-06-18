/* Written by: Cherlie Palarpalar 
CMSC 28 - Class Implementation */

#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
private:
    string Title;       // Private member variable to store the title of the book
    string Author;      // Private member variable to store the author of the book
    string ISBN;        // Private member variable to store the ISBN of the book
    string Publisher;   // Private member variable to store the publisher of the book

public:
    // Constructor
    Book(string title, string author, string isbn, string publisher) : Title(title), Author(author), ISBN(isbn), Publisher(publisher) {}
    
    // Getter methods
    string getTitle() {      // Retrieve the title of the book
        return Title;
    };

    string getAuthor() {     // Retrieve the author of the book
        return Author;
    };

    string getISBN() {       // Retrieve the ISBN of the book
        return ISBN;
    };

    string getPublisher() {  // Retrieve the publisher of the book
        return Publisher;
    };

    // Setter methods
    void setTitle(string bookTitle) {           // Set the title of the book
        Title = bookTitle;
    };
    void setAuthor(string bookAuthor) {         // Set the author of the book
        Author = bookAuthor;
    };
    void setISBN(string bookISBN) {             // Set the ISBN of the book
        ISBN = bookISBN;
    };
    void setPublisher(string bookPublisher) {   // Set the publisher of the book
        Publisher = bookPublisher;
    };
};

#endif
