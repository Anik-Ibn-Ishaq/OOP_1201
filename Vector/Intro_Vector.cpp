#include<iostream>
#include<vector>

using namespace std;

int main()
{
   vector <int> vec1;
   vec1={2,4,5,6,78,6};

   for(int i:vec1)
   {
    cout<<i<<" ";
   }
    return 0;
}