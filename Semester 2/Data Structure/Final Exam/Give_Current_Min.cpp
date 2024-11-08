#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insert_min_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int currentrent_index = v.size() - 1;
    while (currentrent_index)
    {
        int parent_index = (currentrent_index - 1) / 2;
        if (v[parent_index] > v[currentrent_index])
        {
            swap(v[parent_index], v[currentrent_index]);
        }
        else
        {
            break;
        }
        currentrent_index = parent_index;
    }
}

void delete_min_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int current = 0;

    while (true)
    {
        int left_index = current * 2 + 1;
        int right_index = current * 2 + 2;
        int last_index = v.size() - 1;
        if (left_index <= last_index && right_index <= last_index)
        {
            if (v[left_index] <= v[right_index] && v[left_index] < v[current])
            {
                swap(v[left_index], v[current]);
                current = left_index;
            }
            else if (v[right_index] <= v[left_index] && v[right_index] < v[current])
            {
                swap(v[right_index], v[current]);
                current = right_index;
            }
            else
            {
                break;
            }
        }
        else if (left_index <= last_index)
        {
            if (v[left_index] < v[current])
            {
                swap(v[left_index], v[current]);
                current = left_index;
            }
            else
            {
                break;
            }
        }
        else if (right_index <= last_index)
        {
            if (v[right_index] < v[current])
            {
                swap(v[right_index], v[current]);
                current = right_index;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n, q;
    cin >> n;
    vector<int> v;

    while (n--)
    {
        int val;
        cin >> val;
        insert_min_heap(v, val);
    }

    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int val;
            cin >> val;
            insert_min_heap(v, val);

            if (!v.empty())
            {
                cout << v.front() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 1)
        {
            if (!v.empty())
            {
                cout << v.front() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!v.empty())
            {
                delete_min_heap(v);
                if (!v.empty())
                {

                    cout << v.front() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}