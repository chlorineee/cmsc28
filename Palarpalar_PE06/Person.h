/* Written by: Cherlie Palarpalar
CMSC 28 - Class Implementation */

#include <iostream>
#include <string>
#ifndef PERSON_H    // Checks if the header file has been included
#define PERSON_H    // Defines the header file

using namespace std;

class Person {
    private:
        string fname;   // Private member variable to store the first name of the person
        string lname;   // Private member variable to store the last name of the person
        string gender;  // Private member variable to store the gender of the person

    public:
        Person() {}                                                         // Default constructor

        // Setter methods
        void setFname(const string& fname) { this->fname = fname; }         // Setter method for the first name
        void setLname(const string& lname) { this->lname = lname; }         // Setter method for the last name
        void setGender(const string& gender) { this->gender = gender; }     // Setter method for the gender

        // Getter methods
        string getFname() const { return fname; }       // Getter method for the first name
        string getLname() const { return lname; }       // Getter method for the last name
        string getGender() const { return gender; }     // Getter method for the gender
};

#endif