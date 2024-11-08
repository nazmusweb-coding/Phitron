#include <iostream>
using namespace std;
// ```cpp
class person
{
public:
    person(const string& name, int age, const string& profession)
    {
        this->name = name;
        this->age = age;
        this->profession = profession;
    }
    void getInfo()
    {
        cout << "Name       : " << this->name << endl
             << "Age        : " << this->age << endl
             << "Profession : " << this->profession << endl;
    }
private:
    string name;
    int age;
    string profession;
};

int main()
{
    person *unknown1 = new person("Rakib", 29, "Developer");
    person *unknown2 = new person("Sakib", 22, "Student");

    unknown1->getInfo();
    cout << endl;
    unknown2->getInfo();
    cout << endl;

    *unknown1 = *unknown2;

    delete unknown2;

    unknown1->getInfo();
    cout << endl;

    delete unknown1;

    return 0;
}