#include<iostream>
using namespace std;

class Car{

public:
int number;
string name;
float price;
};

void print(Car c){
    cout<<c.number<<" "<<c.name<<" "<<c.price<<endl;
};

int main()
{  
    Car c1;
    c1.number=45687;
    c1.name="Honda Car";
    c1.price=300000.45;
    Car c2;
    c2.number=34566;
    c2.name="Maruti suzuki";
    c2.price=450000.65;

    Car c3;
    c3.number=57836;
    c3.name="Zero Gravity";
    c3.price=85000.45;

    print(c1);
    print(c2);
    print(c3);


  
return 0;
}