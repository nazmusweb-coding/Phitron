#include <iostream>
using std::cout;

int main()
{
    float a;
    std::cin >> a;
    if (-1000 <= a && a <= 1000)
    {    
        if (0 <= a && a <= 25)
        {
            cout << "Interval [0,25]\n";
        }
        else if (25 < a && a <= 50)
        {
            cout << "Interval (25,50]\n";
        }
        else if (50 < a && a <= 75)
        {
            cout << "Interval (50,75]\n";
        }
        else if (75 < a && a <= 100)
        {
            cout << "Interval (75,100]\n";
        }
        else
        {
            cout << "Out of Intervals\n";
        }
    }
    
    return 0;
}