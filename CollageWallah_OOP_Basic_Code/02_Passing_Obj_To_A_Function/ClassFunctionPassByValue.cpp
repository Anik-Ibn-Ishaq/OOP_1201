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
  
  void change(Car& c)  // naturally class function is pass by value
  {                    // value will cahnge only if we use & sign
     c.number=10000;
     c.name="Honda City";
     c.price=700000;
  };
int main()
{  
    Car c1;
    c1.number=45687;
    c1.name="Honda Car";
    c1.price=300000.45;
    
    print(c1);
    change(c1);
    print(c1);


  
return 0;
}