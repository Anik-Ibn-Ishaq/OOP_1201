#include<iostream>
using namespace std;

class Student{ //This is my user defined data type

public:
   int marks;
   string name;
   int age;
};

int main()
{   
    Student S1;
    S1.marks=78;
    S1.name="Anik Khon..";
    cin>>S1.age;

    Student S2;
    S2.marks=56;
    S2.name="Akash chawla";
    S2.age=22;

    cout<<S1.age<<" "<<S1.marks<<" "<<S1.name<<endl;
    cout<<S2.age<<" "<<S2.marks<<" "<<S2.name<<endl;
  
return 0;
}