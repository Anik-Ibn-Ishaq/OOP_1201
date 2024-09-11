#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;

    for (int i = 0; i <= 50; i++)
    {
        vec1.push_back(i);
    }
    for (int i : vec1)
    {
        cout << i << " ";
    }
    return 0;
}