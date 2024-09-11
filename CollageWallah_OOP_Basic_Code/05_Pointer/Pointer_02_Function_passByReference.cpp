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
 
 void Change(Rubber* c){

     c->amount=55;  // (*c).amount=50;
 }


int main()
{
    Rubber r1(4500, "rubber1", 45);
    cout<<r1.amount<<endl;

    
    Change(&r1);
    cout<<r1.amount<<endl;


    // Rubber *p1=&r1;
    // cout<<(*p1).price<<endl;
    // (*p1).name="Rubber_2";
    // cout<<(*p1).name<<endl;
    // cout<<r1.name<<endl;

    return 0;
}