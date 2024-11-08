#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    double a = 12.2324345;
    cout << fixed << setprecision(2) << a << endl;

    return 0;
}
