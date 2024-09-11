#include <iostream>
using namespace std;

class Set
{
    int m, n;

public:
    void input(void);
    void display(void);
    int largest(void);
};

void Set ::input(void)
{
    cout << "Input The Value of m and n :" << endl;
    cin >> m >> n;
}
int Set::largest(void)
{
    if (m > n)
    {
        return m;
    }
    if (n > m)
    {
        return n;
    }
}
void Set ::display(void)
{
    cout << "Lergest Value:" << largest() << endl;
}

int main()
{
    Set A;
    A.input();
    A.display();
    return 0;
}