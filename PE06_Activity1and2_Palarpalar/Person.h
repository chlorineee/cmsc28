#include <iostream>

using namespace std;

class Person {
	private:
		int age;
		char gender;
	public:
		Person(){}

		void setage(int newage){
			if( newage >= 0) {
				age = newage;
			} else {
				cout << "invalid age!!!" << endl;
			}
		}

		int getage(){
			return age;
		}
		
		void setgender(char c){
			if( (c == 'M') || (c == 'F') ){
				gender = c;
			} else {
				cout << "invalid gender!!!" << endl;
			}
		}
		
		char getgender(){
			return gender;
		}

		// Method view is an overloaded method. This means that we have the same method
		// name but with different signature: (), (int age) and (int age, char gender)
		void view(){
			cout << "Age: " << getage() << endl;
			cout << "Gender: " << getgender() << endl;
        }
};