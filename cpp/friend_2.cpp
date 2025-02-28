#include <iostream>
using namespace std;
class A;

class B
{
public:
    void display(A obja);
};

class A
{
private:
    int value;

public:
    A(int v) : value(v) {};
    friend class B;
};
void B::display(A obja)
{
    cout << "Value of A is: " << obja.value << endl;
}

int main()
{
    A obj1(10);
    B obj2;
    obj2.display(obj1);
    return 0;
}