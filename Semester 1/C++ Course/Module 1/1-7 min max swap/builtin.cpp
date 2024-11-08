#include <iostream>
#include <algorithm>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::min;
using std::max;
using std::swap;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int c = min(a, b);
    int d = max(a, b);

    int mn = min({a, b, c, d});
    int mx = max({a, b, c, d});

    swap(a, b);
    swap(c, d);
}