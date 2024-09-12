//#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string name;
    string acc_no;
    string type;

public:
    Account(string name, string acc_no, string type)
        : name(name), acc_no(acc_no), type(type) {}
};

class Cur_acct : private Account {
private:
    double total_balance;
    double deposit_amount;
    double min_bal;

public:
    Cur_acct(string name, string acc_no, string type, double initial_balance, double deposit_amount)
        : Account(name, acc_no, type), total_balance(initial_balance), deposit_amount(deposit_amount), min_bal(0) {

    }

    void setMinBalance(double balance) {
        min_bal = balance;
        if (total_balance < min_bal) {
            total_balance -= 5;
            cout << "Service Charge Is Imposed" << endl;
        }
    }

    void deposit(double amount) {
        deposit_amount = amount;
        total_balance += deposit_amount;
        cout << "DEPOSITED " << deposit_amount << " taka. Total Balance is " << total_balance << " taka" << endl;
    }
};

class Sav_acct : private Account {
private:
    double total_balance;
    double deposit_amount;

public:
    Sav_acct(string name, string acc_no, string type, double initial_balance, double deposit_amount)
        : Account(name, acc_no, type), total_balance(initial_balance), deposit_amount(deposit_amount) {

    }

    void deposit(double amount) {
        deposit_amount = amount;
        total_balance += deposit_amount;
        cout << "DEPOSITED " << deposit_amount << " taka. Total Balance is " << total_balance << " taka" << endl;
    }

    void depositInterest(double interest_rate) {
        double interest = deposit_amount * (interest_rate / 100);
        cout << "DEPOSIT INTEREST IS " << interest << endl;
        total_balance += deposit_amount + interest;
        cout << "Total Balance after interest is " << total_balance << " taka" << endl;
    }

    void withdrawal(double amount) {
        if (amount > total_balance) {
            cout << "INSUFFICIENT BALANCE" << endl;
        } else {
            total_balance -= amount;
            cout << "WITHDRAWAL IS SUCCESSFUL, Total balance is: " << total_balance << endl;
        }
    }
};

int main() {
    Cur_acct myacct("Anik", "1550", "Curr_Acc", 100, 200);
    myacct.setMinBalance(5000);
    myacct.deposit(55);

    Sav_acct myacct1("Khondokar", "1808", "Sav Acc", 100, 200);
    myacct1.deposit(200);
    myacct1.depositInterest(5);
    myacct1.withdrawal(55);
    myacct1.withdrawal(374);

    return 0;
}
