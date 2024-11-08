#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
    void getInfo() const
    {
        cout << "Name: " << this->name << endl
             << "Roll: " << this->roll << endl
             << "CGPA: " << this->cgpa << endl;
    }
};

int main()
{
    Student sectionD[2];
    sectionD[0].roll = 29;
    sectionD[0].cgpa = 3.95;
    char temp[100] = "Sakib";
    strcpy(sectionD[0].name, temp);

    sectionD[1].roll = 24;
    sectionD[1].cgpa = 3.95;
    char pemp[100] = "Rakib";
    strcpy(sectionD[1].name, pemp);

    sectionD[0].getInfo();
    sectionD[1].getInfo();

    return 0;
}