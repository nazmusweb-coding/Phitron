#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int>List;
    int val;
    while (cin >> val && val != -1)
    {
        List.push_back(val);
    }

    List.sort();
    List.unique();

    for (list<int>::iterator it = List.begin(); it != List.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}