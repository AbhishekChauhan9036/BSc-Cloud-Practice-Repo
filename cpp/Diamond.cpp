#include <iostream>

using namespace std;
// 

class A
{
public:
    int a;
    void f1()
    {
        cout << "This is f1 of A" << endl;
    }
};

class B1 : virtual public A
{
public:
    int b1;
    void f2()
    {
        cout << "This is f2 of B1" << endl;
    }
};

class B2 : virtual public A
{
public:
    int b2;
    void f3()
    {
        cout << "This is f2 of B2" << endl;
    }
};

class C : public B1, public B2
{
public:
    int c;
    void f4()
    {
        cout << "This is f4 of C" << endl;
    }
};
int main()
{

    C c1;
    cout << "Size of C1: " << sizeof(c1) << endl;

    return 0;
    return 0;
}