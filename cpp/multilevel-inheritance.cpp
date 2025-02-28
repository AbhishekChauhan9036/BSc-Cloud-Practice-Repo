#include <iostream>
#include <string>

using namespace std;

class Bank_account
{
protected:
    string acc_holder;
    double balance;

public:
    Bank_account(string name, double bal)
    {
        acc_holder = name;
        balance = bal; // balance is the current account balance
    }
    Bank_account() {}; // default constructor

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
            cout << "Your current balance is: " << balance << endl;
            return;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
    }
    void balance_check()
    {
        cout << "Your current balance is: " << balance << endl;
    }
};

class saving_account : virtual public Bank_account
{
protected:
    double interest_rate;
    double savings;
    float interest = 0;

public:
    saving_account(double Savings, double Interest_rate)
        : savings(Savings), interest_rate(Interest_rate) {}

    saving_account() {}
    void savings_check()
    {
        savings += interest;
        cout << "Your current savings is: " << savings << endl;
    }

    void print_interest()
    {

        interest = (savings * interest_rate) / 100;
        cout << "Interest is: " << interest << endl;
    }
};

class premium_account : public saving_account
{
protected:
    double bonus_rate;
    double bonus;

public:
    premium_account(string name, double bal, double Savings, double Interest_rate, double rate)
        : Bank_account(name, bal), saving_account(Savings, Interest_rate), bonus_rate(rate)
    {
        // Constructor body
    }

    premium_account() {}

    // void bonus()
    // {

    //     bonus = (balance * bonus_rate) / 100;
    //     cout << "Interest is: " << bonus << endl;
    // }

    void add_bonus()
    {
        bonus = (balance * bonus_rate) / 100;
        balance += bonus;
        cout << "Bonus added: " << bonus << endl;
    }
};
int main()
{
    premium_account p1("John", 1000, 5000, 5.6, 5.6);//(name, balance, savings, interest rate, bonus rate)
    p1.balance_check();
    p1.deposit(5000); // Bank account
    p1.balance_check();
    cout << endl;

    p1.savings_check();
    p1.print_interest();
    p1.savings_check(); // savings account

    cout << endl;
    p1.balance_check(); // premium account
    p1.add_bonus();
    p1.balance_check();

    return 0;
}