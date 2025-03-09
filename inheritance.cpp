#include <iostream>
using namespace std;

class Human {
public:
    int height;
    int weight;
    int age;

public:
    int getage() {
        return this->age;
    }
    void setweight(int w) { // Changed return type to void
        this->weight = w;
    }
};

class Male : public Human {  // Class name changed to PascalCase (best practice)
public:
    string color;

    void sleep() {
        cout << "Sleeping..." << endl;
    }
};

int main() {
    Male object;

    // Initializing object attributes (otherwise they have garbage values)
    object.age = 25;
    object.height = 175;
    object.weight = 70;
    object.color = "Brown";

    cout << "Age: " << object.age << endl;
    cout << "Height: " << object.height << " cm" << endl;
    cout << "Weight: " << object.weight << " kg" << endl;
    cout << "Color: " << object.color << endl;

    // Updating weight using setweight()
    object.setweight(50);
    cout << "Updated Weight: " << object.weight << " kg" << endl;

    object.sleep();

    return 0;
}
