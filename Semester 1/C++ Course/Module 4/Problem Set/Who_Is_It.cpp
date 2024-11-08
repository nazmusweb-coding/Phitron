#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student array[3];// 3 different object could be taken i know but u guys already taught array so this is a simple array of object there should be no problem in this one!
    Student temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[j].id >> array[j].name >> array[j].section >> array[j].marks;
        }

        if (array[0].marks > array[1].marks && array[0].marks > array[2].marks)
            temp = array[0];
        else if (array[1].marks > array[0].marks && array[1].marks > array[2].marks)
            temp = array[1];
        else if (array[2].marks > array[0].marks && array[2].marks > array[1].marks)
            temp = array[2];
        else
        {
            if (array[0].marks == array[1].marks)
                temp = array[0];
            else if (array[1].marks == array[2].marks)
                temp = array[1];
            else if (array[0].marks == array[2].marks)
                temp = array[0];
        }

        cout << temp.id << " " << temp.name << " " << temp.section << " " << temp.marks << endl; 
    }

    return 0;
}