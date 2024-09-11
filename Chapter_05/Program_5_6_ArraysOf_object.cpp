#include <iostream>
#include <string>
using namespace std;
class Employee
{
    char name[10];
    float age;

public:
    void getData();
    void putData();
};

void Employee::getData()
{
    cout << "Enter name :";
    cin >> name;
    cout << "Enter age :";
    cin >> age;
}
void Employee::putData()
{
    cout << "Name :" << name << endl;
    cout << "Age :" << age << endl;
}
const int size = 3;

int main()
{
    Employee member[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Details Of member" << i + 1 << endl;
        member[i].getData();
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Details Of member" << i + 1 << endl;
        member[i].putData();
    }

    return 0;
}