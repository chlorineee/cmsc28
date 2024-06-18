// Written by: C. Palarpalar

#include <iostream>

using namespace std;

class Shirt {
    // Attributes
    private:
        string Color;
        string Size;
        string Fabric;

    public:
        // Constructor
        Shirt(string color, string size, string fabric) : Color(color), Size(size), Fabric(fabric) {}

        // Display Function
        void checkShirt() {
            cout << "Checking shirt..." << endl;
            cout << "Color: " << Color << endl;
            cout << "Size: " << Size << endl;
            cout << "Fabric: " << Fabric << endl;
        }
};

int main() {
    Shirt shirt1("Red", "Medium", "Cotton");    // Create an object of the class Shirt
    shirt1.checkShirt();    // Display the shirt's details

    return 0;
}