#include <iostream>
using namespace std;

class Rubber
{
public:
    int price;
    string name;
    int amount;

    Rubber(int price, string name, int amount)
    {
        this->price = price;
        this->name = name;
        this->amount = amount;
    }
    void print(int price)
    {
        cout << this->price << " " << name << " " << amount << endl;
        cout << price << endl;
    }

    int cal()
    {
        return price / amount;
    }
};

int main()
{
    Rubber r1(4500, "rubber1", 45);
    r1.print(4566);
    cout << r1.cal();

    return 0;
}