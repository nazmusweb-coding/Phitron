// Sieve of Eratosthenes

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void find_Prime(int x)
{
    vector <bool> arr(x, 0);
    for (int i = 2; i <= x; i++)
    {
        for (int j = i * i; j <= x; j+=i)
        {
            arr[j-1] = 1;
        }
    }

    for (int i = 1; i <= x; i++)
    {
        if (arr[i-1] == 0)
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int x;
    cin >> x;
    cout << "Primes: " << endl;
    find_Prime(x);

    return 0;
}