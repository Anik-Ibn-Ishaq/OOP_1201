#include <iostream>
using namespace std;
class Item
{
private:
    int number;
    float cost;

public:
  void getdata(int a, float b);  
    void putdata(void)
    {
        cout << "Number : " << number << endl;
        cout << "Cost : " << cost << endl;
    }
};

void Item :: getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    Item x;

    x.getdata(455, 456.5);
    x.putdata();

    cout<<endl;
    
    Item Y;
    Y.getdata(564, 45.75);
    Y.putdata();

    return 0;
}