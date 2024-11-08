#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int size, sum;

    for (int i = 0; i < n; i++)
    {
        cin >> size >> sum;

        int flag = 0;
        int *ar = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < size-2; i++)
        {
            for (int j = i+1; j < size-1; j++)
            {
                for (int k = j+1; k < size; k++)
                {
                    if ((ar[i] + ar[j] + ar[k]) == sum)
                    {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }  
            if (flag)
                break;
        }
        
        if (flag == 0)
            cout << "NO" << endl;

        delete[] ar;
    }
    

    return 0;
}