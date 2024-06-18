/* Written by: Cherlie Palarpalar 
Submitted to: Prof. Vicente Calag
CMSC 28 - Programming Exercise 04 - C++ Warm Up */

#include <iostream>
#include <algorithm>

using namespace std;

// Function to display program description
void progdescription() {
    cout << "This program takes three numbers as inputs, finds the highest and lowest number, and prints their difference.\n";
    cout << "Programmed by: Cherlie Palarpalar\n";
    cout << "Date: April 27, 2024\n";
    cout << "As a partial requirement for the course CMSC 28\n";
}

// Function to read data
void readdata(int &x, int &y, int &z) {
    cout << "\nEnter three numbers:\n";     // Ask user to enter three numbers
    for (int i = 1; i <= 3; i++) {          // Loop to get the three numbers
        cout << "[" << i << "] ";
        if (i == 1) {
            cin >> x;
        } else if (i == 2) {
            cin >> y;
        } else {
            cin >> z;
        }
    }
}

// Function to get the smallest value
int getsmall(int x, int y, int z) {
    return min({x, y, z});                  // Return the smallest value
}

// Function to get the largest value
int getlarge(int x, int y, int z) {
    return max({x, y, z});                  // Return the largest value
}

// Function to display data
void showdata(int x, int y, int z, int smallval, int largeval, int diff) {
    cout << "\nThe numbers are: " << x << ", " << y << ", " << z << "\n";                   // Display the three numbers
    cout << "The smallest number is: " << smallval << "\n";                                 // Display the smallest number
    cout << "The largest number is: " << largeval << "\n";                                  // Display the largest number
    cout << "The difference between the largest and smallest number is: " << diff << "\n";  // Display the difference between the largest and smallest number
}

// Function to ask user if they want to enter another set of numbers
void askUser(char &choice) {
    cout << "Do you want to enter another set of numbers? (Y/N): ";     // Ask user if they want to enter another set of numbers
    cin >> choice;                                                      // Get user input                         
}


// Function to thank user for using the program
void thankUser() {
    cout << "\nThank you for using my program!\n";                      // Display thank you message   
    exit(0);                                                            // Exit the program 
}

int main() {
    int x, y, z, smallval, largeval, diff;              // Declare variables
    char choice;                                        // Declare variable
    progdescription();                                  // Display program description    
    while(true) {
        readdata(x, y, z);                              // Read data  
        smallval = getsmall(x, y, z);                   // Get the smallest value
        largeval = getlarge(x, y, z);                   // Get the largest value
        diff = largeval - smallval;                     // Get the difference between the largest and smallest value
        showdata(x, y, z, smallval, largeval, diff);    // Display data
        askUser(choice);                                // Ask user if they want to enter another set of numbers
        if (choice == 'N' || choice == 'n') {           // If user input is N or n, thank the user
            thankUser();
        }
    }
    return 0;
}