#include <iostream>
#include <queue>

using namespace std;

class people
{
public:
    string name;
    int value;
    people(string name, int value)
    {
        this->name = name;
        this->value = value;
    }
};

class cmp
{
public:
    bool operator()(people a, people b)
    {
        if (a.name == b.name)
        {
            if (a.value < b.value)
            {
                return true;
            }
            return false;
        }
        else if (a.name > b.name)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    priority_queue<people, vector<people>, cmp>my_pq;

    while (n--)
    {
        string name;
        int value;
        cin >> name >> value;
        people obj(name, value);
        my_pq.push(obj);
    }
    
    while (!my_pq.empty())
    {
        cout << my_pq.top().name << " " << my_pq.top().value << " " << endl;
        my_pq.pop();
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class people
// {
// public:
//     string name;
//     int value;
//     people(string name, int value)
//     {
//         this->name = name;
//         this->value = value;
//     }
// };

// bool cmp(people a, people b)
// {
//     if (a.name < b.name)
//     {
//         return true;
//     }
//     else if (a.name == b.name)
//     {
//         if (a.value > b.value)
//         {
//             return true;
//         }
//         return false;
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<people> my_vector;

//     while (n--)
//     {
//         string name;
//         int value;
//         cin >> name >> value;
//         people obj(name, value);
//         my_vector.push_back(obj);
//     }

//     sort(my_vector.begin(), my_vector.end(), cmp);
    
//     for (auto person : my_vector) 
//     {
//         cout << person.name << " " << person.value << endl;
//     }

//     return 0;
// }