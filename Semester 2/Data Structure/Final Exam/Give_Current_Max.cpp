#include <iostream>
#include <queue>

using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;
    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks == b.marks)
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            return false;
        }
        return false;
    }
};

void get_current_max(priority_queue<student, vector<student>, cmp> &list)
{
    if (!list.empty())
    {
        cout << list.top().name << " " << list.top().roll << " " << list.top().marks << endl;
    }
    else
    {
        cout << "Empty" << endl;
    }
}

int main()
{
    int n, q;
    cin >> n;

    priority_queue<student, vector<student>, cmp> list;

    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student obj(name, roll, marks);
        list.push(obj);
    }

    cin >> q;   
    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student obj(name, roll, marks);
            list.push(obj);
            get_current_max(list);
        }
        else if (x == 1)
        {
            get_current_max(list);
        }
        else
        {
            if (!list.empty())
            {
                list.pop();
                get_current_max(list);
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    
    return 0;
}