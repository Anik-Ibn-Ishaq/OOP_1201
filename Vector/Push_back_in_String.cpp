#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec1;
    string word;
    // for (int i = 0; i <= 50; i++)
    // {
    //     vec1.push_back(i);
    // }
    while(cin>>word)
    {
        vec1.push_back(word);
    }
    for (string i : vec1)
    {
        cout << i << " ";
    }
    return 0;
}