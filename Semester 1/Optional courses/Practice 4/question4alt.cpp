// Ternary to Decimal
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double convert_Decimal(int x)
{
    double count = 0, output = 0;
    while (x > 0)
    {
        output += (x % 10) * pow(3, count);
        x /= 10;
        count++;
    }

    return output;
}

int main()
{
    int x;
    cin >> x;
    cout << "Decimal: " << convert_Decimal(x) << endl;

    return 0;
}