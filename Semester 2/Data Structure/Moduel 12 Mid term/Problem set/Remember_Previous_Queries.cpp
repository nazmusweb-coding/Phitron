#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int>List;
    int Q, X, V;
    cin >> Q;
    while (Q--)
    {
        cin >> X >> V;
        if (X == 0)
        {
            List.push_front(V);
        }
        else if (X == 1)
        {   
            List.push_back(V);
        }
        else if (X == 2 && V < (int)List.size())
        {
            list<int>::iterator it = List.begin();
            advance(it, V);
            List.erase(it); 
        }
        
        cout << "L -> ";
        for (list<int>::iterator it = List.begin(); it != List.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        List.reverse();
        cout << "R -> ";
        for (list<int>::iterator it = List.begin(); it != List.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        List.reverse();

    }
    
    return 0;
}