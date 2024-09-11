#include <iostream>
#include <vector>

using namespace std;

int main()
{    
    vector<int> vec1;
    cout<<"Is this empty?"<<vec1.empty()<<endl;
    vec1={3,4,5,6,7,8};
    cout<<"Is this empty?"<<vec1.empty()<<endl;

    cout<<"Size Of Vec1= "<<vec1.size()<<endl;
     
    vec1.push_back(9);
    for(int i:vec1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"The forth element Of my Vec Array is :"<<vec1[3]<<endl;

    vector <int> vec2={1,2,3,4,5,6};
    vec1=vec2;
    cout<<"New vec1: ";
    for(int i:vec1)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    vec1={7,8,9,10,11,12};
    for(int i:vec1)
    {
        cout<<i<<" ";
    }
    return 0;
}