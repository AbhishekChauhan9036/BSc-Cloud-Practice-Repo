#include <iostream>
using namespace std;

class Bankaccount
{
private:
    float length;
    float width;

public:
    // Constructor
    Bankaccount(float l = 0.0, float w = 0.0) : length(l), width(w) 
    {
        cout << "Bankaccount object created." << endl;
    }

    // Destructor
    ~Bankaccount() 
    {
        cout << "Bankaccount object destroyed." << endl;
    }

    void setlength(float l)
    {
        length = l;
    }
    void setwidth(float w)
    {
        width = w;
    }
    void area_of_rectangle()
    {
        cout << "Area of rectangle: " << length * width << endl;
    }
};

int main()
{
    float length, width;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    // Create object with user input
    Bankaccount obj(length, width);

    obj.area_of_rectangle();

    return 0;
}