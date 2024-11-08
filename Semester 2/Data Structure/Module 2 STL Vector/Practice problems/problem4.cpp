#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>V = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Size: " << V.size() << " Capacity: " << V.capacity() << " Maximum size: " << V.max_size() << endl;
    for (int i : V)
    {
        cout << i << " ";
    }
    cout << endl;
    V.resize(20, 0);
    cout << "Size: " << V.size() << " Capacity: " << V.capacity() << endl;
    for (int i : V)
    {
        cout << i << " ";
    }
    cout << endl;
    V.clear();
    cout << "Size: " << V.size() << " Capacity: " << V.capacity() << endl;
    for (int i : V)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Status: " << V.empty() << endl;
    V.resize(10, 100);
    cout << "Size: " << V.size() << " Capacity: " << V.capacity() << endl;
    
    for (int i : V)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}