// Decimal to ternary

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double convert_Ternary(int x)
{
    double count = 0, output = 0;
    while (x > 0)
    {
        output += (x % 3) * pow(10, count);
        x /= 3;
        count++;
    }

    return output;
}

int main()
{
    int x;
    cin >> x;
    cout << "Ternary: " << convert_Ternary(x) << endl;

    return 0;
}