#include <iostream>  

using namespace std;  

int main()  
{  
    string sentence, target;  
     
    while (cin >> sentence >> target)  
    {  
        int length_of_sentence = sentence.length();
        int length_of_target = target.length();  

        if (length_of_sentence < length_of_target)
        {
            cout << "Impossible" << endl;
            continue;
        }

        int j = 0;

        for (int i = 0; i < length_of_sentence; i++) 
        {
            if (j < length_of_target && sentence[i] == target[j]) 
            {
                j++;
            }
        }
        if (j == length_of_target) 
        {
            cout << "Possible" << endl;
        } 
        else 
        {
            cout << "Impossible" << endl;
        } 
    }  

    return 0;  
}  