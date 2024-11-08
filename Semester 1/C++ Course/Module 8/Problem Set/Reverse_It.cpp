#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    void getInfo()
    {
        cout << Name << " " << Class << " " << Section << " " << Id << endl;
    }
    string Name;
    int Class;
    char Section;
    int Id;
};

void myswap(Student& a, Student& b)
{
    char section = a.Section;
    a.Section = b.Section;
    b.Section = section;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    Student logBook[n];

    for (int i = 0; i < n; i++)
    {
        cin >> logBook[i].Name >> logBook[i].Class >> logBook[i].Section >> logBook[i].Id;
        cin.ignore();
    }
    
    for (int i = 0; i < (int)n/2; i++)
    {
        myswap(logBook[i], logBook[n-i-1]);
    }  

    for (Student person : logBook)
    {
        person.getInfo();
    }

    return 0;
}