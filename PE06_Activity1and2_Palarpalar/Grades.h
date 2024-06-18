// Written by: C. Palarpalar

#include <iostream>

using namespace std;

class Grades {
	private:
		string subject;	// subject name
		float grade;	// grade of the student
	public:
		Grades(){}

		// Setters
		void setsubject(string s){
			subject = s;
		}

		void setgrade(float g){
			grade = g;
        }

		// Display Functions
		void view(){
			cout << "Subject: " << subject << endl;
			if (grade >= 0 && grade <= 100){
				cout << "Grade: " << grade << endl;
			} else {
				cout << "Grade: Invalid" << endl;
            }
        }

		void check(){
			if (grade >= 75){
				cout << "Status: PASSED" << endl;
			} else {
				cout << "Status: FAILED" << endl;
			}
		}
};