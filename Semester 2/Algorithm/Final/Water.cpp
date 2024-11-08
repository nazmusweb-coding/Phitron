#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        int heights[n];
        
        for (int i = 0; i < n; i++) 
        {
            cin >> heights[i];
        }
        
        int left = 0;          
        int right = n - 1;   
        int maxHeight = 0;       
        int bestLeft = 0;         
        int bestRight = n - 1;    
        
        while (left < right) 
        {
            int currentHeight = min(heights[left], heights[right]); 
            
            if (currentHeight > maxHeight) 
            {
                maxHeight = currentHeight;
                bestLeft = left;
                bestRight = right;
            }
            
            if (heights[left] < heights[right]) 
            {
                left++;
            } 
            else 
            {
                right--;
            }
        }
        
        cout << bestLeft << " " << bestRight << endl;
    }
    
    return 0;
}