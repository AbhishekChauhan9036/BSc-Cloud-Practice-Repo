#include"bits/stdc++.h"
using namespace std;
class Base{
    public:
    virtual void showMessage(){
        cout<<"Base: Default Message"<<endl;
    }
};

class Derived : public Base{
    public:
    void showMessage(){
        cout<<"Derived: Custom Message"<<endl;
    }
};

int main(){
    Base* ptr;
    Derived d;

    ptr = &d;
    ptr->showMessage();

    return 0;

}