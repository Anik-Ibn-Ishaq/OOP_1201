#include<iostream>
using namespace std;

class Human {
   public:
      string name;
      int age;
      int height; // in centimeters

      Human(string n, int a, int h) {
        name = n;
        age = a;
        height = h;
      }
};

int main() {  
    Human h1("Anik", 34, 170); // example height in centimeters
    cout << h1.name << " " << h1.age << " " << h1.height << endl;
  
    return 0;
}
