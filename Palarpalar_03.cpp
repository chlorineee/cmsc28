/* CMSC 28 Programming Exercise 03 - Queue Implementation
Written by: Cherlie Palarpalar          Section: K-1L
This program is a check-out counter system implemented using queues.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Customer structure
typedef struct customer {
    char name[50];                              // Customer's name
    float amount;                               // Total amount payable
    struct customer* next;                      // Pointer to the next customer
} customer;                                     // Alias for struct customer 

// Queue structure
typedef struct queue {
    customer* front;                            // Pointer to the front customer
    customer* rear;                             // Pointer to the rear customer
} queue;                                        // Alias for struct queue       

// Function to create a new customer
customer* createCustomer(char* name, float amount) {
    customer* temp = (customer*)malloc(sizeof(customer));   // Allocate memory for the customer
    strcpy(temp->name, name);                               // Copy the name to the customer
    temp->amount = amount;                                  // Set the amount payable
    temp->next = NULL;                                      // Set the next to NULL                               
    return temp;                                            // Return the customer      
}

// Function to initialize the queue
queue* init() {
    queue* q = (queue*)malloc(sizeof(queue));       // Allocate memory for the queue
    q->front = q->rear = NULL;                      // Set the front and rear to NULL
    return q;                                       // Return the queue
}

// Function to check if the queue is empty
bool empty(queue* q) {
    return (q->rear == NULL);                       // Return true if the rear is NULL
}

// Function to get the front customer
customer* front(queue* q) {
    if (empty(q))                                   // If the queue is empty
        return NULL;                                // Return NULL                      
    return q->front;                                // Return the front customer                            
}

// Function to enqueue a new customer
void enqueue(queue* q, char* name, float amount) {
    customer* temp = createCustomer(name, amount);  // Create a new customer
    if (q->rear == NULL) {                          // If the queue is empty
        q->front = q->rear = temp;                  // Set the front and rear to the new customer
        return;
    }
    q->rear->next = temp;                           // Link the new customer to the rear
    q->rear = temp;                                 // Set the rear to the new customer
}

// Function to dequeue the front customer
customer* dequeue(queue* q) {
    if (empty(q))
        return NULL;
    customer* temp = q->front;                      // Get the front customer
    q->front = q->front->next;                      // Move the front to the next customer
    if (q->front == NULL)                           // If the queue is empty
        q->rear = NULL;                             // Set the rear to NULL
    return temp;                                    // Return the front customer
}

// Function to serve all customers
void serveAll(queue* q) {       
    while (!empty(q)) {                             // While the queue is not empty
        customer* x = dequeue(q);                   // Dequeue the front customer
        printf("Now serving %s with total amount payable of %.4f.\n", x->name, x->amount);
        free(x);                                    // Free the customer
    }
    printf("All customers have been served.\n");
}

// Function to free the queue
void freeQueue(queue* q) {
    while (!empty(q)) {                             // While the queue is not empty
        customer* temp = dequeue(q);                // Dequeue the front customer
        free(temp);                                 // Free the temporary customer
    }
    free(q);                                        // Free the queue
}

// Main function
int main() {
    queue* q = init();                              // Initialize the queue
    int choice;                                     // User's choice
    char name[50];                                  // Customer's name
    float amount;                                   // Total amount payable
    customer* x;                                    // Customer

    printf("Welcome to SM Davao City Department Store!\n");
    printf("Checkout Counter 0 is now open.\n");

    do {
        // Display the menu
        printf("\nSM Davao City Department Store Counter 0:\n");
        printf("[1] Fall in line\n");
        printf("[2] Serve customer\n");
        printf("[3] Next customer\n");
        printf("[4] Closing time\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Perform the user's choice
        switch (choice) {
            // Add a customer to the queue
            case 1:
                printf("\nEnter customer's name: ");            // Get the customer's name
                scanf("%s", name);
                printf("Enter total amount to be paid: ");      // Get the total amount payable
                scanf("%f", &amount);
                enqueue(q, name, amount);                       // Enqueue the customer
                break;
            // Serve the front customer
            case 2:
                // If the queue is empty, display a message
                if (empty(q)) {
                    printf("\nThe QUEUE is EMPTY. No orders to serve.\n");
                } else {    // Otherwise, serve the front customer
                    x = dequeue(q);
                    printf("\nNow serving %s with total amount payable of %.4f.\n", x->name, x->amount);
                    free(x);                                    // Free the customer    
                }
                break;
            // Display the front customer
            case 3:
                // If the queue is empty, display a message
                if (empty(q)) {
                    printf("\nThe QUEUE is EMPTY. No order to serve.\n");
                } else {    // Otherwise, display the front customer
                    x = front(q);
                    printf("\nNext order: For %s with total amount payable of %.4f.\n", x->name, x->amount);
                }
                break;
            // Serve all customers
            case 4:
                // If the queue is empty, display a message
                if (empty(q)) {
                    printf("\nThe QUEUE is EMPTY. No customer/s to serve.\n");
                } else {    // Otherwise, serve all customers
                    printf("\nClosing time. Serving all customers...\n");
                    serveAll(q);
                }
                break;
            // Free the queue and exit the program
            case 0:
                printf("\nThank you for shopping at SM Davao City Department Store!\n");
                printf("\nThe checkout system has been terminated.\n");
                freeQueue(q);           // Free the queue
                exit(0);                // Exit the program
            // Invalid choice
            default:
                printf("\nInvalid choice. Please try again.\n");          
        } 
    } while (choice != 0);              // Repeat until the user chooses to exit

    return 0;
}