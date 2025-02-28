#include <iostream>

using namespace std;

class Employee
{
public:
    int id;
    string name;
    Employee(int inpId, string inpName)
    {
        id = inpId;
        name = inpName;
    }
    Employee() {}

    void display()
    {
        cout << "Id of this employee is " << id << endl;
        cout << "Name of this employee is " << name << endl;
    }
};

class manager : public Employee
{

public:
    string department;

    manager(string dep, int inpId, string inpName) : Employee(inpId, inpName)
    {
        department = dep;
    }

    void display()
    {
        cout << "Name of this manager is " << name << endl;
        cout << "Department of this manager is " << department << endl;
        cout << "Id of this manager is " << id << endl;
    }
};
int main()
{
    manager e1("cloud and application dev", 1, "Rahul");
    e1.display();

    return 0;
}