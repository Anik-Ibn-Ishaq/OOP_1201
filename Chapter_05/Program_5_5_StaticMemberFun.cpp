#include <iostream>
using namespace std;

class Test
{
    int code;
    static int count;

public:
    void setCode()
    {
        code = ++count;
    }
    void showCode()
    {
        cout << "Object Number :" << code << endl;
    }
    static void showCount()
    {
        cout << "Count :" << count << endl;
    }
};

int Test::count;

int main()
{
    Test t1, t2, t3;

    t1.setCode();
    t2.setCode();

    Test ::showCount();

    t3.setCode();
    

    Test ::showCount();

    t1.showCode();
    t2.showCode();
    t3.showCode();
    return 0;
}