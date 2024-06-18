/* Written by: Cherlie Palarpalar
CMSC 28 - Programming Exercise 07
Product Class | Header File */

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

using namespace std;

class Product {
    private:
        // Attributes
        string Name;
        string Brand;
        double Price;
        int Quantity;
        string Description;
        string Color;
        string Category;
    public:
        Product () {} // Constructor
        
        // Getterrs
        string getName() { return Name; }

        string getBrand() { return Brand; }
        double getPrice() { return Price; }
        int getQuantity() { return Quantity; }
        string getDescription() { return Description; }
        string getColor() { return Color; }
        string getCategory() { return Category; }
        void setName(string name) { this->Name = name; }
        void setBrand(string brand) { this->Brand = brand; }
        void setPrice(double price) { this->Price = price; }
        void setQuantity(int quantity) { this->Quantity = quantity; }
        void setDescription(string description) { this->Description = description; }
        void setColor(string color) { this->Color = color; }
        void setCategory(string category) { this->Category = category; }

        // Display method
        void display() {
            cout << "Name: " << Name << endl;
            cout << "Brand: " << Brand << endl;
            cout << "Price: " << Price << endl;
            cout << "Quantity: " << Quantity << endl;
            cout << "Description: " << Description << endl;
            cout << "Color: " << Color << endl;
            cout << "Category: " << Category << endl;
        }
};

#endif