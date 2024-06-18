// Written by: Cherlie Palarpalar
// This program will demonstrate the use of inheritance in C++.

#include <iostream> 
#include <limits>       
#include "Student.h"    // Include the header file that contains the definition of the class Student

using namespace std;

// Function to display the student's information
void display(Student student) {
    string fname = student.getFname();
    string lname = student.getLname();
    string studentNum = student.getStudentNum();        // Get the student's number
    cout << "Hi, " << fname << " " << lname << "! Welcome to UP Mindanao and congratulations! We are pleased to inform you that you are admitted in the " << student.Course << " program under the " << student.Department << ", " << student.College << ". Your Student number is " << studentNum << "." << endl;
}    

int main() {
    cout << "Programmed by: Cherlie Palarpalar\n\n";    // Display the name of the programmer (me :D)
    Student student;                                    // Declare an object of class Student

    string name;                                        // Declare a variable to store the student's name
    cout << "Enter Student First Name: ";               // Prompt the user to enter the student's first name       
    getline(cin, name);                                 // Read the student's first name
    student.setFname(name);                             // Set the student's first name
    cout << "Enter Student Last Name: ";                // Prompt the user to enter the student's last name
    getline(cin, name);                                 // Read the student's last name 
    student.setLname(name);                             // Set the student's last name
    
    char gender;
    bool validInput = false;
    while (!validInput) {
        cout << "Enter Student Gender (M/F): ";         // Prompt the user to enter the gender
        cin >> gender;                                  // Read the gender
        if (isalpha(gender) && (gender == 'M' || gender == 'F')) {  // Check if the input is a character and is either 'M' or 'F'
            validInput = true;                       
        } else {
            cout << "Invalid input. Please enter either 'M' or 'F'." << endl;
            cin.clear();                                // Clear the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore any remaining characters in the input buffer
        }
    }
    student.setGender(gender);                          // Assign the gender to the student 
    
    cout << "Enter Student Number: ";                   // Prompt the user to enter the student's number
    string studentNum;                                  // Declare a variable to store the student's number 
    cin >> studentNum;                                  // Read the student's number              
    student.setStudentNum(studentNum);                  // Set the student's number
    
    cout << "Enter Student Course: ";                   // Prompt the user to enter the student's course
    cin.ignore();                                       // Ignore the newline character in the input buffer        
    string course;                                      // Declare a variable to store the student's course
    getline(cin, course);                               // Read the student's course        
    student.setCourse(course);                          // Set the student's course             
    cout << "Enter Student Department: ";               // Prompt the user to enter the student's department 
    string department;                                  // Declare a variable to store the student's department  
    getline(cin, department);                           // Read the student's department  
    student.setDepartment(department);                  // Set the student's department   
    cout << "Enter Student College: ";                  // Prompt the user to enter the student's college 
    string college;                                     // Declare a variable to store the student's college  
    getline(cin, college);                              // Read the student's college     
    student.setCollege(college);                        // Set the student's college

    display(student);                                   // Display the student's information           
}