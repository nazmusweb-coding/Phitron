#include <iostream>
#include <utility>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

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

    // Selection sort, sorting based on roll
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (record[i].mark > record[j].mark)
            {
                swap(record[i], record[j]);
            }
            if (record[i].mark == record[j].mark)   // if marks are same, it will sort based on roll
            {
                if (record[i].roll > record[j].mark)
                {
                    swap(record[i], record[j]);
                }
            }
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << record[i].name << endl
             << "Roll : " << record[i].roll << endl
             << "Mark : " << record[i].mark << endl;
    }

    return 0;
}
