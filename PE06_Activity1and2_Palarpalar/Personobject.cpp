// Written by: C. Palarpalar

#include <iostream>
#include "Person.h"
#include "Grades.h"

using namespace std;

int main() {

    // Display the title
    cout << "Class Record" << endl;
    cout << "=======================" << endl;

    // Create an object of the class Person and Grades
    Person student1;
    Grades student1Grades;

    // Set the student's record
    cout << "Enter the student's age: "<< endl;
    int age;
    cin >> age;
    student1.setage(age);

    cout << "Enter the student's gender (M/F): " << endl;
    char gender;
    cin >> gender;
    student1.setgender(gender);

    cout << "Enter the student's subject: " << endl;
    string subject;
    cin >> subject;
    student1Grades.setsubject(subject);

    cout << "Enter the student's grade: " << endl;
    float grade;
    cin >> grade;
    student1Grades.setgrade(grade);

    cout << "Student's record saved successfully!" << endl;
    cout << "========================================" << endl;

    // Display the student's record
    cout << "Displaying the student's record: " << endl;    
    student1.view();
    student1Grades.view();
    student1Grades.check();

    return 0;
}