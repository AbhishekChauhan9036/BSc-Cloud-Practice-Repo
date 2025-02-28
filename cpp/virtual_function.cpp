#include "bits/stdc++.h"

using namespace std;

class person
{
public:
    virtual void showdetails() = 0;
};

class student : public person
{
public:
    void showdetails()
    {
        cout << "This is student class" << endl;
    }
};

class Employee : public person
{
public:
    void showdetails()
    {
        cout << "This is Employee class" << endl;
    }
};

// late binding

int main()
{
    person *p1 = new student();
    person *p2 = new Employee();

    p1->showdetails();
    p2->showdetails();

    delete p1;
    delete p2;

    return 0;
}