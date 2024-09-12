#include <bits/stdc++.h>
using namespace std;

class Account
{
protected:
    string customer_name;
    int acc_no;
    string acc_type;
    double balance;

public:
    Account(string name, int no, string type, double bal)
        : customer_name(name), acc_no(no), acc_type(type), balance(bal) {} // initialize
    void deposit(int x)
    {
        balance = balance + x;
    }
    void display()
    {
        cout << "name : " << customer_name << endl;
        cout << "account number : " << acc_no << endl;
        cout << "account type : " << acc_type << endl;
        cout << "balance : " << balance << endl;
    }
};
class sav_acc : public Account
{
protected:
    double intrest_rate;

public:
    sav_acc(string name, int no, string type, double bal, double rate)
        : Account(name, no, type, bal), intrest_rate(rate) {} // using the base class constructor
    void compound_intrest()
    {
        balance = balance + (balance * (intrest_rate / 100));
    }
    void withdraw(double y)
    {
        if (y <= balance)
            balance = balance - y;
        else
            cout << "insufficent money" << endl;
    }
};
class cur_acc : public Account
{
protected:
    double minimum_balance;
    double service_charge;
    bool checkbook_facility;

public:
    cur_acc(string name, int no, string type, double bal, double min, double charge, bool checkbook)
        : Account(name, no, type, bal), minimum_balance(min), service_charge(charge),
          checkbook_facility(checkbook) {}
    void pay_service_charge()
    {
        balance = balance - service_charge;
    }
    void check_minimum_balance()
    {
        if (balance < minimum_balance)
        {
            cout << "penalty!!" << endl;
            pay_service_charge(); // only invokes when theres a penalty
        }
    }
    void withdraw(double z)
    {
        if (z <= balance)
        {
            balance = balance - z;
            check_minimum_balance();
        }
        else
            cout << "insufficent money" << endl;
    }
    void display()
    {
        Account::display();
        cout << "checkbook facility : " << (checkbook_facility ? "Available" : "Unavailable") << endl;
    }
};
int main()
{
    sav_acc c1("max", 106007, "Savings", 50000.4, 12.5);
    c1.compound_intrest();
    c1.withdraw(11900);
    c1.display();
    cout << endl;
    cur_acc c2("sam", 190078, "Current", 65000.9, 10000.0, 500.0, true);
    c2.check_minimum_balance();
    c2.withdraw(19785);
    c2.display();
    return 0;
}