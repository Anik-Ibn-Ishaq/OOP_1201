#include <iostream>
using namespace std;

class Item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout << "count :";
        cout << count << endl;
    }
};

int Item::count=0;

int main()
{
    Item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(400);
    a.getdata(500);

    cout << "After Reading Data :" << endl;
    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}
