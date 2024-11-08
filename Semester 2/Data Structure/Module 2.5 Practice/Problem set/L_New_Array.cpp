// Note: Solve this problem using function.
#include <iostream>
#include <vector>

using namespace std;

vector<int>myfunc(vector<int>A, vector<int>B)
{
    vector<int>C;
    vector<int>::iterator it = C.begin();
    C.insert(it, B.begin(), B.end());
    it = C.end();
    C.insert(it, A.begin(), A.end());
    return C;
}

void getVector(vector<int>A)
{
    int size = A.size();
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}

void setVector(vector<int>&A)
{
    int size = A.size();
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int>A(n);
    vector<int>B(n); 
    setVector(A); 
    setVector(B);

    vector<int>C(n+n);
    C = myfunc(A, B);
    
    getVector(C);

    return 0;
}