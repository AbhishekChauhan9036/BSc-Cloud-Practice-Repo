#include <iostream>

using namespace std;
class Animal
{

public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing..." << endl;
    }
};

int main()
{
    Dog d1;
    cat c1;

    c1.meow();
    c1.eat();

    cout << endl;
    d1.bark();
    d1.eat();

    return 0;
}