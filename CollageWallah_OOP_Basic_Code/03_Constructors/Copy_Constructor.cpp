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

    Human h3(h1);
    h3.name="helal";//It's a Deep Copy

    Human h4=h1;// It's Also a Deep Copy
    h4.name="Karim Uddin";

    cout << h2.name << " " << h2.age << " " << h2.height << endl;
     cout << h3.name << " " << h3.age << " " << h3.height << endl;
    cout << h4.name << " " << h4.age << " " << h4.height << endl;

    return 0;
}
