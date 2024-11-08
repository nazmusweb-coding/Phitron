#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int method_odd1, method_odd2, method_even1, method_even2;

    method_even1 = method_even2 = method_odd1 = method_odd2 = -1;

    for (int i = 0; i < n; i++) 
    {  
        if (array[i] % 2 == 0) 
        {  
            if (array[i] > method_even1)
            {
                method_even2 = method_even1;
                method_even1 = array[i];
            } 
            else if (array[i] > method_even2)
            {
                method_even2 = array[i];
            }
        } 
        else 
        {  
            if (array[i] > method_odd1) 
            {  
                method_odd2 = method_odd1; 
                method_odd1 = array[i]; 
            } 
            else if (array[i] > method_odd2) 
            {  
                method_odd2 = array[i];
            }  
        }  
    }  

    int max_sum_of_odds = -1;
    int max_sum_of_evens = -1;

    if (method_odd1 != -1 && method_odd2 != -1)
    {
        max_sum_of_odds = method_odd1 + method_odd2;
    }

    if (method_even1 != -1 && method_even2 != -1)
    {
        max_sum_of_evens = method_even1 + method_even2;
    }

    cout << max({method_even1, max_sum_of_evens, max_sum_of_odds}) << endl;
    
    return 0;
}