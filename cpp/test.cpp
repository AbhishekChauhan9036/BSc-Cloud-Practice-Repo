#include <iostream>

using namespace std;

class complex
{
private:
    int real;
    int imag;

public:
    complex(int r = 0, int i = 0)
    {

        if (i > r)
        {
            real = i;
            imag = r;
        }
        else if (r < 0 || i < 0)
        {
            if (r < 0)
            {
                real = -r;
                imag = i;
            }
            else if (i < 0 && r < 0)
            {
                real = -r;
                imag = -i;
            }
            else
            {
                real = r;
                imag = -i;
            }
        }
        else
        {
            real = r;
            imag = i;
        }
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    complex operator-(complex const &obj)
    {
        complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    complex operator*(complex const &obj)
    {
        complex res;
        res.real = real * obj.real - imag * obj.imag;
        res.imag = real * obj.imag + imag * obj.real;
        return res;
    }
    complex operator/(complex const &obj)
    {
        complex res;
        res.real = (real * obj.real + imag * obj.imag) / (obj.real * obj.real + obj.imag * obj.imag);
        res.imag = (imag * obj.real - real * obj.imag) / (obj.real * obj.real + obj.imag * obj.imag);
        return res;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex c1(-1, 7), c2(2, 5);
    complex c3 = c1 + c2;

    c3.print();

    return 0;
}