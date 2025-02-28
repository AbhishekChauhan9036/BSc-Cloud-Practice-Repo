// #include <bits/stdc++.h>

// using namespace std;

// class Complex
// {
// private:
//     double real;
//     double imag;

// public:
//     void setValue(double r, double i)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(Complex other)
//     {
//         Complex temp;
//         temp.real = real + other.real;
//         temp.imag = imag + other.imag;
//         return temp;
//     }

//     void display()
//     {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1, c2, c3;
//     c1.setValue(3.4,4.1);
//     c2.setValue(2.6,1.1);
//     c3 = c1 + c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }

// ---

#include <bits/stdc++.h>

using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator-(Complex const &obj)
    {

        return Complex(real - obj.real, imag - obj.imag);
    }

    void display()
    {
        cout << real << " - " << imag << endl;
    }
};

int main()
{

    Complex c1(5, 2);
    Complex c2(2, 1);
    Complex c3 = c1 - c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}