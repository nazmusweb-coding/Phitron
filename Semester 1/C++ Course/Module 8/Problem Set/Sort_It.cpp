#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    void getInfo()
    {
        cout << Name << " " << Class << " " << Section << " " << Id << " " << math_marks << " " << english_marks << endl;
    }
    string Name;
    int Class;
    char Section;
    int Id;
    int math_marks;
    int english_marks;
};

void myswap(Student& a, Student& b)
{
    Student temp = a;
    a = b;
    b = temp;
}

void mysort(Student *log, int totalStudents)
{
    for (int i = 0; i < totalStudents-1; i++)
    {
        for (int j = i+1 ; j < totalStudents; j++)
        {
            int OneTotalMarks = log[i].math_marks + log[i].english_marks;
            int AnotherTotalMarks = log[j].math_marks + log[j].english_marks;
            if (OneTotalMarks < AnotherTotalMarks)
            {
                myswap(log[i], log[j]);
            }
            else if (OneTotalMarks == AnotherTotalMarks)
            {
                if (log[i].Id > log[j].Id)
                {
                    myswap(log[i], log[j]);
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    Student logBook[n];

    for (int i = 0; i < n; i++)
    {
        cin >> logBook[i].Name >> logBook[i].Class >> logBook[i].Section >> logBook[i].Id >> logBook[i].math_marks >> logBook[i].english_marks;
        cin.ignore();
    }

    mysort(logBook, n);

    for (Student person : logBook)
    {
        person.getInfo();
    }

    return 0;
}