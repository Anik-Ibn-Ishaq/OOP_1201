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
    Rubber *p1= new Rubber(5699,"Rubber_02",55);

    cout<<(*p1).name<<endl;
    cout<<p1->price<<endl;

    return 0;
}