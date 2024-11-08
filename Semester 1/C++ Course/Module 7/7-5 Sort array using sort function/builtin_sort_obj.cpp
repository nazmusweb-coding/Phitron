#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

bool custom(const Student& a, const Student& b)
{
    if (a.mark < b.mark)        // accending order for builtin sort
    {
        return true;
    }

    if (a.mark == b.mark)
    {
        if (a.roll < b.roll)    // accending order for builtin sort
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();   
    Student record[n];

    for (int i = 0; i < n; i++)
    {
        cin >> record[i].name >> record[i].roll >> record[i].mark;
    }

    sort(record, record + n, custom);  

    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << record[i].name << endl
             << "Roll : " << record[i].roll << endl
             << "Mark : " << record[i].mark << endl;
    }

    return 0;
}
