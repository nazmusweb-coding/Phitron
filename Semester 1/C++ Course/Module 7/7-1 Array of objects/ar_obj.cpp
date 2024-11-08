#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int roll;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();   
    Student record[n];

    for (int i = 0; i < n; i++)
    {
        cin >> record[i].name >> record[i].roll;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << record[i].name << endl
             << "Roll : " << record[i].roll << endl;
    }

    return 0;
}