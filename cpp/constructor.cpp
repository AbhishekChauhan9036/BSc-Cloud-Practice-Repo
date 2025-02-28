#include <iostream>
using namespace std;

class Example {
public:
    int value;
    int *ptr;

    // Default constructor
    Example() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Example(int v) {
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Example(const Example &obj) {
        value = obj.value;
    }

    // Move constructor
    Example(Example &&obj) {
        ptr = obj.ptr;
        obj.ptr = nullptr;
    }

    // Destructor
    ~Example() {
     if (ptr) {
        delete ptr;
     }
    }

};

int main() {
    Example obj1; // Default constructor

    Example obj2(10); // Parameterized constructor

    Example obj3 = obj2; // Copy constructor

    Example obj4 = Example(obj2); // Move constructor

    return 0;
}