/* Written by: Cherlie Palarpalar
CMSC 28 - Programming Exercise 07
Main CPP File*/

#include <iostream>
#include "Product.h"

using namespace std;

class Clothing : public Product {
    private: 
        // Specific attributes for Clothing
        string Size;
        string Material;
    public:
        Clothing(string size, string material) : Size(size), Material(material) {} // Constructor
        
        // Setters
        void setSize(string size) { this->Size = size; }
        void setMaterial(string material) { this->Material = material; }

        // Getters
        string getSize() { return Size; }
        string getMaterial() { return Material; }

        // Display method
        void displaySpecific() {
                cout << "Size: " << getSize() << endl;
                cout << "Material: " << getMaterial() << endl;
        }
};

class Electronics : public Product {
    private:
        // Specific attributes for Electronics
        string Model;
        string Warranty;
        string TechnicalSpecs;
    public:
        Electronics(string model, string warranty, string technicalSpecs) : Model(model), Warranty(warranty), TechnicalSpecs(technicalSpecs) {} // Constructor

        // Setters
        void setModel(string model) { this->Model = model; }
        void setWarranty(string warranty) { this->Warranty = warranty; }
        void setTechnicalSpecs(string technicalSpecs) { this->TechnicalSpecs = technicalSpecs; }

        // Getters
        string getModel() { return Model; }
        string getWarranty() { return Warranty; }
        string getTechnicalSpecs() { return TechnicalSpecs; }

        // Display method
        void displaySpecific() {
                cout << "Warranty: " << getWarranty() << endl;
                cout << "Technical Specifications: " << getTechnicalSpecs() << endl;
        }
};

// Function to display the program description
void programDesc() {
    cout << "This is the main file for the Product Inventory System." << endl;
    cout << "This file will demonstrate the use of the Product class and its child classes." << endl;
    cout << "Programmed by: Cherlie Palarpalar" << endl;
}

// Function to get the product details from the user
void getProductDetails(string& name, string& brand, double& price, int& quantity, string& description, string& color, string& category) {
    cin.ignore();
    cout << "\nEnter the name of the product: ";
    getline(cin, name);
    cout << "Enter the brand of the product: ";
    getline(cin, brand);
    cout << "Enter the price of the product: ";
    cin >> price;
    cout << "Enter the quantity of the product: ";
    cin >> quantity;
    cin.ignore(); 
    cout << "Enter the description of the product: ";
    getline(cin, description);
    cout << "Enter the color of the product: ";
    getline(cin, color);
    cout << "Enter the category of the product: ";
    getline(cin, category);
}

int main() {
    programDesc(); // Display program description
    char choice;
    do {
        cout << "\nDo you want to add a product to the inventory? (Y/N): "; // Ask user if they want to add a product
        cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            cout << "What type of product do you want to add?\n[1] Clothing\n[2] Electronics\nChoice: "; // Ask user what type of product they want to add
            int productChoice;
            cin >> productChoice;

            if (productChoice == 1) {   // If user chooses Clothing
                string name, brand, description, color, category, size, material;
                double price;
                int quantity;

                getProductDetails(name, brand, price, quantity, description, color, category); // Get product details from user
                
                // Get specific details for Clothing
                cout << "Enter the size of the product: ";  
                getline(cin, size);
                cout << "Enter the material of the product: ";
                getline(cin, material);

                // Create a Clothing object and set its attributes
                Clothing clothing(size, material);
                clothing.setName(name);
                clothing.setBrand(brand);
                clothing.setPrice(price);
                clothing.setQuantity(quantity);
                clothing.setDescription(description);
                clothing.setColor(color);
                clothing.setCategory(category);

                // Display the details of the product
                cout << "\nDetails of the product: \n";
                clothing.display();
                clothing.displaySpecific();
            } else if (productChoice == 2) {   // If user chooses Electronics
                string name, brand, description, color, category, model, warranty, technicalSpecs;
                double price;
                int quantity;

                getProductDetails(name, brand, price, quantity, description, color, category);  // Get product details from user
                
                // Get specific details for Electronics
                cout << "Enter the model of the product: ";
                getline(cin, model);
                cout << "Enter the warranty of the product: ";
                getline(cin, warranty);
                cout << "Enter the technical specifications of the product: ";
                getline(cin, technicalSpecs);

                // Create an Electronics object and set its attributes
                Electronics electronics(model, warranty, technicalSpecs);
                electronics.setName(name);
                electronics.setBrand(brand);
                electronics.setPrice(price);
                electronics.setQuantity(quantity);
                electronics.setDescription(description);
                electronics.setColor(color);
                electronics.setCategory(category);

                // Display the details of the product
                cout << "\nDetails of the product: \n";
                electronics.display();
                electronics.displaySpecific();
            } else {
                cout << "Invalid choice." << endl; }
        } else if (choice == 'N' || choice == 'n') {
            break;
        } else {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 'N' || choice != 'n');   // Loop until user chooses to exit

    cout << "Thank you for using the Product Inventory System." << endl;    // Exit message

    return 0;
}