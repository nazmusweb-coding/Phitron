#include <iostream>

using namespace std;

long long Sum(long long X) 
{
    if (X % 2 == 0) 
    {
        long long Y = X / 2;
        return Y * (Y + 1);
    } 
    else 
    {
        long long Y = (X + 1) / 2;
        return Y * Y;
    }
}

int main() 
{
    long long N, Q;
    cin >> N >> Q;

    for (long long q = 0; q < Q; q++) 
    {
        long long L, R;
        cin >> L >> R;

        long long sum = Sum(R) - Sum(L - 1);
        cout << sum << endl;
    }

    return 0;
}