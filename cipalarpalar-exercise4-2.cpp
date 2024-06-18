/* Written by: Cherlie Palarpalar 
Submitted to: Prof. Vicente Calag
CMSC 28 - Programming Exercise 04 - C++ Warm Up */

#include <iostream>
#include <string>

using namespace std;

// Function to display program description
void progdescription() {
    cout << "This program converts a decimal number to binary.\n";
    cout << "Programmed by: Cherlie Palarpalar\n";
    cout << "Date: April 27, 2024\n";
    cout << "As a partial requirement for the course CMSC 28\n";
}

// Function to read data
void readdata(int &num) {
    cout << "\nEnter a decimal number: ";       // Ask user to enter a decimal number
    cin >> num;                                 // Get the decimal number
}

// Function to convert decimal to binary
string decimalToBinary(int n) {
    string binary = "";                         // Initialize binary as an empty string
    while (n > 0) {                             // Loop to convert decimal to binary
        binary = to_string(n % 2) + binary;     // Get the remainder of n divided by 2 and concatenate it to binary
        n = n / 2;                              // Divide n by 2      
    }
    return binary;                              // Return the binary equivalent
}

// Function to display data
void showdata(int num, string binary) {
    cout << "The binary equivalent of " << num << " is: " << binary << "\n";        // Display the binary equivalent
}

void askUser(char &choice) {
    cout << "Do you want to convert another decimal number? (Y/N): ";               // Ask user if they want to convert another decimal number
    cin >> choice;                                                                  // Get user input             
}

void thankUser() {
    cout << "\nThank you for using my program!\n";                                  // Display thank you message      
    exit(0);                                                                        // Exit the program             
}

int main() {
    int num;                                        // Declare variable num to store the decimal number
    string binary;                                  // Declare variable binary to store the binary equivalent 
    char choice;                                    // Declare variable choice to store user input      
    progdescription();                              // Display program description
    while(true) {
        readdata(num);                              // Read data
        binary = decimalToBinary(num);              // Convert decimal to binary
        showdata(num, binary);                      // Display data
        askUser(choice);                            // Ask user if they want to convert another decimal number
        if (choice == 'N' || choice == 'n') {       // If the choice is 'N' or 'n', thank the user and exit the program
            thankUser();
        }
    }
    return 0;
}