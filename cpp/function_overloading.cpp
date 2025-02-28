// #include <iostream>

// using namespace std;

// void num(string b)
// {
//     cout << "string: " << b << endl;
// }
// void num(int a,int b )
// {
//     cout << "Integer: " << a << " "<<b<< endl;
// }
// void num(double a )
// {
//     cout << "double number: " << a << endl;
// }
// int main()
// {
// num(5.5);
// num(5,6);
// num("Hello");

//     return 0;
// }





// wiht class

#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int age;
    double salary;

public:
    void employee(string n)
    {
        name = n;
    }
    void employee(int a)
    {
        age = a;
    }
    void employee(double s)
    {
        salary = s;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e1;
    e1.employee("John bnega Don");
    e1.employee(25);
    e1.employee(50000.00);
    e1.display();
    return 0;
}