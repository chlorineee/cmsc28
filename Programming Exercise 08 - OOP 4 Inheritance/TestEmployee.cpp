// Written by: Cherlie Palarpalar
// This program will demonstrate the use of inheritance in C++.

#include <iostream>
#include <limits>
#include "Employees.h"                                  // Include the header file that contains the definition of the class Employees      

using namespace std;

// Function to display the employee's information
void display(Employees employee) {
    string fname = employee.getFname();
    string lname = employee.getLname();
    string empNum = employee.getEmpNum();

    cout << "Hi, " << fname << " " << lname << "! Welcome to UP Mindanao and congratulations! We are pleased to inform you that you have been accepted to work as " << employee.Position << " at " << employee.Office << " with a salary of P" << employee.Salary << ". Your employee number will be " << empNum << "." << endl;
}    

int main() {
    cout << "Programmed by: Cherlie Palarpalar\n\n";    // Display the name of the programmer (me :D)
    Employees employee;                                 // Declare an object of class Employees  

    string name;                                        // Declare a variable to store the employee's name            
    cout << "Enter Employee First Name: ";              // Prompt the user to enter the employee's first name          
    getline(cin, name);                                 // Read the employee's first name     
    employee.setFname(name);                            // Set the employee's first name
    cout << "Enter Employee Last Name: ";               // Prompt the user to enter the employee's last name           
    getline(cin, name);                                 // Read the employee's last name     
    employee.setLname(name);                            // Set the employee's last name    
    
    char gender;
    bool validInput = false;
    while (!validInput) {
        cout << "Enter Employee Gender (M/F): ";        // Prompt the user to enter the gender
        cin >> gender;                                  // Read the gender
        if (isalpha(gender) && (gender == 'M' || gender == 'F')) {  // Check if the input is a character and is either 'M' or 'F'
            validInput = true;                       
        } else {
            cout << "Invalid input. Please enter either 'M' or 'F'." << endl;
            cin.clear();                                // Clear the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore any remaining characters in the input buffer
        }
    }
    employee.setGender(gender);                         // Assign the gender to the employee

    cout << "Enter Employee Number: ";                  // Prompt the user to enter the employee's number    
    string empNum;                                      // Declare a variable to store the employee's number                
    cin >> empNum;                                      // Read the employee's number                     
    employee.setEmpNum(empNum);                         // Set the employee's number                

    cout << "Enter Employee Position: ";                // Prompt the user to enter the employee's position     
    cin.ignore();                                       // Ignore the newline character in the input buffer 
    string position;                                    // Declare a variable to store the employee's position   
    getline(cin, position);                             // Read the employee's position                      
    employee.setPosition(position);                     // Set the employee's position              
    cout << "Enter Employee Office: ";                  // Prompt the user to enter the employee's office               
    string office;                                      // Declare a variable to store the employee's office
    getline(cin, office);                               // Read the employee's office
    employee.setOffice(office);                         // Set the employee's office              
    
    double salary;                                      // Declare a variable to store the employee's salary
    bool validSalary = false;
    while (!validSalary) {
        cout << "Enter Employee Salary: ";              // Prompt the user to enter the employee's salary                           
        if (cin >> salary) {                            // Read the employee's salary and check if it's a number
            validSalary = true;
        } else {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();                                // Clear the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore any remaining characters in the input buffer
        }
    }
    employee.setSalary(salary);                         // Set the employee's salary

    display(employee);                                  // Display the employee's information   
}
