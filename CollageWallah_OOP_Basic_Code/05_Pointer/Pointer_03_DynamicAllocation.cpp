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
    
};
 


int main()
{
    Rubber r1(4500, "rubber1", 45);
    cout<<r1.amount<<endl;

    int *ptr=new int(456);  // Dynamic Allocation
    cout<<*ptr<<endl;
 

    return 0;
}