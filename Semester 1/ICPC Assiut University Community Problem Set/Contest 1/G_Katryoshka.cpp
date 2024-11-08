#include <iostream>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long min_pieces = min(min(n, m), k);

    n -= min_pieces;
    m -= min_pieces;
    k -= min_pieces;

    long long additional_katryoshkas = 0;
    if (n >= 2 && k > 0)
    {
        additional_katryoshkas += min(n / 2, k);
    }
    else if (n >= 1 && m >= 1 && k >= 1)
    {
        additional_katryoshkas += min(n, min(m, k));
    }

    long long total_katryoshkas = min_pieces + additional_katryoshkas;
    cout << total_katryoshkas << endl;

    return 0;
}