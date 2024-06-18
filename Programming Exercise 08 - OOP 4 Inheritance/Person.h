// Written by: Cherlie Palarpalar

#include <iostream>
#ifndef PERSON_H        // If PERSON_H is not defined, then define PERSON_H

using namespace std;

class Person {
    private:
        string fname;       // First Name
        string lname;       // Last Name
        char gender;        // Gender
    public:
        string emailAdd;    // Email Address
        string cpNumber;    // Contact Number

        // Setters for the private members
        void setFname(const string &name) { fname = name; };       // Set the first name
        void setLname(const string &name) { lname = name; };       // Set the last name
        void setGender(const char &Gender) { gender = Gender; };   // Set the gender

        // Getters for the private members
        string getFname() const { return fname; };                 // Get the first name
        string getLname() const { return lname; };                 // Get the last name
        char getGender() const { return gender; };                 // Get the gender

        // Setters for the public members (accdng to the instructions)
        void setEmailAdd(const string &email) { emailAdd = email; };   // Set the email address
        void setCpNumber(const string &number) { cpNumber = number; }; // Set the contact number

        // Getters for the public members (accdng to the instructions)
        string getEmailAdd() const { return emailAdd; };               // Get the email address
        string getCpNumber() const { return cpNumber; };               // Get the contact number
};

#endif