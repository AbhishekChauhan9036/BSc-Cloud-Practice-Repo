#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int rollnumber;
    int age;

public:
    void setname(string Name)
    {
        name = Name;
    }
    void setrollnumber(int Rollnumber)
    {
        rollnumber = Rollnumber;
    }
    void setage(int Age)
    {
        age = Age;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Rollnumber :"<<rollnumber<<endl;
        cout<<"Age :"<<age<<endl;
    }
};
int main()
{
    student takshay ,swayam;
    takshay.setname("takshay");
    takshay.setrollnumber(10);
    takshay.setage(18);
    takshay.display();


    return 0;
}