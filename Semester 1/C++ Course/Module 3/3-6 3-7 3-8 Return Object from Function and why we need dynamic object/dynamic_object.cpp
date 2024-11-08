#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    Student(string name, int roll=0, double cgpa=0)
    {
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }
    string name;
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
    Student one("Rakib Hasan", 24, 3.95);
    Student *two = new Student("Sakib kalam", 28, 3.98); // dynamic object

    one.getInfo();
    two->getInfo();

    delete two;

    return 0;
}