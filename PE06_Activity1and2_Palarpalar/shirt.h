#ifndef SHIRT_H
#define BOOK_H

#include <iostream>

using namespace std;

class Shirt {
    private:
        // Attributes
        string Color;   
        string Size;
        string Fabric;
    
    public:
        Shirt(string color, string size, string fabric) : Color(color), Size(size), Fabric(fabric) {} // Constructor

        // Display Function
        void checkShirt() {
            cout << "Checking shirt..." << endl;
            cout << "Color: " << Color << endl;
            cout << "Size: " << Size << endl;
            cout << "Fabric: " << Fabric << endl;
        }
};

#endif