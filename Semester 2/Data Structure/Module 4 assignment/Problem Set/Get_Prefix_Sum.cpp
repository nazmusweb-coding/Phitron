#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long>V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    // Calculating prefix sum here
    vector<long long>Pre(n);
    Pre[0] = V[0];
    for (int i = 1; i < n; i++)
    {
        Pre[i] = V[i] + Pre[i-1];
    }

    // Reverse print of prefix sum
    for (int i = n-1; i >= 0; i--)
    {
        cout << Pre[i] << " ";
    }
    
    return 0;
}