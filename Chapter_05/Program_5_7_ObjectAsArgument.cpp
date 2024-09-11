#include<iostream>
using namespace std;

class Time
{  
    int h;
    int m;
    public:
    void getItem(int hours,int minutes)
    {
        h=hours;
        m=minutes;
    }
    void putTime()
    {
        cout<<"Hours :"<<h<<endl;
        cout<<"Minutes :"<<m<<endl;
    }
    void sum(Time t1, Time t2)
    {
        m=t1.m+t2.m;
        h=m/60;
        m=m%60;
        h=h+t1.h+t2.h;
    }
    

};

int main()
{
  
return 0;
}