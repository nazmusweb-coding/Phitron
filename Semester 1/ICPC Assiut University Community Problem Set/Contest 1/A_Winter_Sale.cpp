#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int X, P;
    cin >> X >> P;

    double price = P / (1-(double)X/100);

    cout << fixed << setprecision(2) << price;

    return 0;
}