// Written by: Cherlie Palarpalar

#include <iostream>
#include "Person.h"             // Include the header file that contains the definition of the class Person
#ifndef EMPLOYEES_H             // If EMPLOYEES_H is not defined, then define EMPLOYEES_H

using namespace std;

class Employees : public Person {
    private:
        string empNum;     // Employee number
    public:
        string Position;   // Employee position
        string Office;     // Employee office
        double Salary;          // Employee salary

        void setEmpNum(const string &num) { empNum = num; };       // Set the employee number
        string getEmpNum() const { return empNum; };               // Get the employee number

        // Setter for the public members (accdng to the instructions)
        void setPosition(const string &position) { Position = position; };   // Set the position
        void setOffice(const string &office) { Office = office; };           // Set the office
        void setSalary(const double &salary) { Salary = salary; };           // Set the salary

        // Getter for the public members (accdng to the instructions)
        string getPosition() const { return Position; };                     // Get the position
        string getOffice() const { return Office; };                         // Get the office
        double getSalary() const { return Salary; };                         // Get the salary
};

#endif