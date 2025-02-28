#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Make sure to include this for std::transform

using namespace std;

// Function to convert a string to uppercase
string toUpper(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper); // Use ::toupper for locale-independent uppercase conversion
    return str;
}

int main() {
    // Basic input and output
    cout << "Hello, World!" << endl;

    // Variables and data types
    int age = 30;
    double height = 5.8;
    char initial = 'J';
    string name = "John Doe";
    bool isStudent = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Initial: " << initial << endl;
    cout << "Is Student? " << boolalpha << isStudent << endl; // Use boolalpha to print true/false instead of 1/0

    // String manipulation
    string message = "This is a test message.";
    cout << "Message: " << message << endl;
    cout << "Uppercase message: " << toUpper(message) << endl;
    cout << "Length of message: " << message.length() << endl;

    // Conditional statements
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    // Loops
    cout << "Numbers from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Even numbers from 2 to 10:" << endl;
    int j = 2;
    while (j <= 10) {
        cout << j << " ";
        j += 2;
    }
    cout << endl;


    // Arrays and vectors (dynamic arrays)
    int numbers[] = {10, 20, 30, 40, 50};
    cout << "First element of numbers array: " << numbers[0] << endl;

    vector<string> names = {"Alice", "Bob", "Charlie"};
    names.push_back("David"); // Add an element
    cout << "First name in vector: " << names[0] << endl;
    cout << "Size of names vector: " << names.size() << endl;

    // Functions (example: toUpper function defined above)
    string lowercase = "hello";
    string uppercase = toUpper(lowercase);
    cout << "Uppercase: " << uppercase << endl;


    return 0;
}