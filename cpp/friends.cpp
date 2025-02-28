// #include <iostream>
// using namespace std;

// class BankAcc {
// private:
//     double balance;

// public:
//     void setBalance(double bal) {
//         balance = bal;
//     }

//     double getBalance() const {
//         return balance;
//     }
// };

// int main() {
//     BankAcc obj;
//     cout << "Enter the balance: ";
//     double bal;
//     cin >> bal;
//     obj.setBalance(bal);
//     cout << "The balance is: " << obj.getBalance() <<endl;
//     return 0;
// }



// #include<iostream>

// using namespace std;

// class Rectangle{
// private:
//     int length;
//     int width;
//     public:
//     Rectangle(int l=0,int w=0){
//         length=l;
//         width=w;
//     }
//     ~Rectangle(){
//         cout<<"Destructor"<<endl;
//     }
//     int area(){
//         return length*width;
//     }
// };
// int main()
// {
//    Rectangle r(10,5);
//    int Area=r.area();
//     cout<<"Area is: "<<Area<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Box{
    private:
    double length;

public:
// Constructor Initialisation
Box(double l): length(l){}

// Declare a friend function
friend double calculateArea(Box b);

};

double calculateArea(Box b){
    return (b.length*b.length);
}

int main(){
    Box obj(5.00);
    double area = calculateArea(obj);
    cout << "Area of the box is: " << area << endl;
}