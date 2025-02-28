#include <iostream>

using namespace std;

class A
{

public:
    int a;
    void setA(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Base class" << endl;
    }
};

class B : public A
{

public:
    void ShowData()
    {
        cout << "Value of a is: " << a << endl;
    }
};
int main()
{
B b1;
b1.setA(10);
b1.display();
b1.ShowData();
    return 0;
}