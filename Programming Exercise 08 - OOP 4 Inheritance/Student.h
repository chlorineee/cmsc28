// Written by: Cherlie Palarpalar

#include <iostream>
#include "Person.h"
#ifndef STUDENT_H           // If STUDENT_H is not defined, then define STUDENT_H

using namespace std;

class Student : public Person {
    private:
        string studentNum;
    public:
        string Course;
        string Department;
        string College;

        void setStudentNum(const string &num) { studentNum = num; };   // Set the student number
        string getStudentNum() const { return studentNum; };           // Get the student number

        // Setter for the public members (accdng to the instructions)
        void setCourse(const string &course) { Course = course; };     // Set the course
        void setDepartment(const string &dept) { Department = dept; }; // Set the department
        void setCollege(const string &college) { College = college; }; // Set the college

        // Getter for the public members (accdng to the instructions)
        string getCourse() const { return Course; };                   // Get the course
        string getDepartment() const { return Department; };           // Get the department
        string getCollege() const { return College; };                 // Get the college
};

#endif