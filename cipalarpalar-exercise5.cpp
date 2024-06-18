/* Written by: Cherlie Palarpalar 
CMSC 28 - Programming Exercise 05 - OOP 1 */

#include <iostream>
#include <cmath>

using namespace std;

void description() {
    cout << "Programming Exercise 05\n";
    cout << "Programmed by: Cherlie Palarpalar\n";
    cout << "As a partial requirement for the course CMSC 28\n";
    cout << "------------------------------------------------\n";
    cout << "This program asks the user for integers and finds the largest and smallest numbers among them and calculates their mean, variance, and standard deviation.\n\n";
}

// Function to get user input
void input(int arr[]) {
    // Loop to get the numbers
    for (int i = 0; i < 10; i++) {                                  
        cout << "Input an integer (enter 0 to stop): ";             // Ask user to enter a number
        cin >> arr[i];                                              // Get user input
        if (arr[i] == 0) {                                          // If user input is 0, break the loop
            break;
        }
    }
}

// Function to find the largest number in the array
int findLargest(int arr[]) {
    int largest = arr[0];                                   // Initialize largest to the first element of the array        
    // Loop to find the largest number
    for (int i = 1; i < 10; i++) {                                                    
        if (arr[i] > largest) {                             // If the current element is greater than the largest
            largest = arr[i];                               // Set the current element as the largest
        }
    }
    return largest;                                         // Return the largest number                             
}

// Function to find the smallest number in the array
int findSmallest(int arr[]) {
    int smallest = arr[0];                                  // Initialize smallest to the first element of the array
    // Loop to find the smallest number
    for (int i = 1; i < 10; i++) {                          
        if (arr[i] < smallest) {                            // If the current element is less than the smallest         
            smallest = arr[i];                              // Set the current element as the smallest
        }
    }
    return smallest;                                        // Return the smallest number   
}

// Function to calculate the mean of the numbers in the array
double findMean(int num[]) {    
    int sum = 0;                                            // Initialize sum to 0
    int count = 0;                                          // Initialize count to 0
    // Loop to calculate the sum of the numbers    
    for (int i = 0; i < 10; i++) {                          
        if (num[i] != 0) {                                  // If the current element is not 0
            sum += num[i];                                  // Add the current element to the sum
            count++;                                        // Increment count
        }
    }
    return static_cast<double>(sum) / count;                // Return the mean
}

// Function to calculate the variance of the numbers in the array
double findVariance(int arr[], double mean) {
    double variance = 0.0;                                  // Initialize variance to 0
    int count = 0;                                          
    // Loop to calculate the variance
    for (int i = 0; i < 10; i++) {
        if (arr[i] != 0) {                                  // If the current element is not 0
            variance += pow(arr[i] - mean, 2);              // Add the square of the difference between the current element and the mean to the variance
            count++;                                        // Increment count
        }
    }
    return variance / count;                                // Return the variance
}

// Function to calculate the standard deviation of the numbers in the array
double findStdDev(double variance) {
    return sqrt(variance);                                  // Return the square root of the variance
}

// Function to display the results
void displayResults(int max, int min, double mean, double variance, double stddev) {
    cout << "\nLargest: " << max << "\n";
    cout << "Smallest: " << min << "\n";
    cout << "Mean: " << mean << "\n";
    cout << "Variance: " << variance << "\n";
    cout << "Standard Deviation: " << stddev << "\n";
}

// Function to ask user if they want to enter another set of numbers
void askUser(char &choice) {
    cout << "\nDo you want to enter another set of numbers? (Y/N): ";       // Ask user if they want to enter another set of numbers
    cin >> choice;                                                          // Get user input                         
}

// Function to thank user for using the program
void thankUser() {
    cout << "\nThank you for using my program!\n";                      // Display thank you message   
    exit(0);                                                            // Exit the program 
}

int main() {
    int arr[10] = {0};                                                  // Declare an array of 10 elements and initialize all elements to 0
    description();                                                      // Display program information
    while (true) {
        input(arr);                                                     // Get user input
        int largest = findLargest(arr);                                 // Find the largest number
        int smallest = findSmallest(arr);                               // Find the smallest number
        double mean = findMean(arr);                                    // Ccalculate the mean
        double variance = findVariance(arr, mean);                      // Calculate the variance
        double stddev = findStdDev(variance);                           // Calculate the standard deviation
        displayResults(largest, smallest, mean, variance, stddev);      // Display the results
        char choice;
        askUser(choice);                                                // Ask if the user wants to enter another set of numbers
        if (choice == 'N' || choice == 'n') {                           // If user input is N or n, thank the user
            thankUser();
        }
    }
    return 0;
}