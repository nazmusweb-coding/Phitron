#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    int m;
    cin >> m;
    vector<int>B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int x;
    cin >> x;

    A.resize(n+m);
    vector<int>::iterator it;
    it = A.begin();
    A.insert(it + x, B.begin(), B.end());
    for (int i = 0; i < n+m; i++)
    {
        cout << A[i] << " ";
    }
    
    return 0;
}