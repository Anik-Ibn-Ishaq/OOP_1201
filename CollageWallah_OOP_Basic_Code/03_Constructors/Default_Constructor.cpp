#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;
    int height;

    Human(string n, int a, int h)
    {
        name = n;
        age = a;
        height = h;
    }

    Human() // Default Constructurs
    {
    }
};

int main()
{
    Human h1("Anik", 34, 170);

    cout << h1.name << " " << h1.age << " " << h1.height << endl;

    Human h2;
    h2.name = "Akash Uddin";
    h2.age = 45;
    h2.height = 4;

    cout << h2.name << " " << h2.age << " " << h2.height << endl;

    return 0;
}
