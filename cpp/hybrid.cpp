#include <iostream>

//

using namespace std;
class A
{
public:
    int a;
};
class B1 : public A
{
public:
    int b1;
};

class B2 : public A
{
public:
    int b2;
};

class C :public B1, public B2
{
public:
    int c;
};

int main()
{
    C c1;
    c1.B1::a = 10;
    c1.B2::a = 100;

    cout << "B1::a = " << c1.B1::a << endl;
    cout << "B2::a = " << c1.B2::a << endl;
    return 0;
}