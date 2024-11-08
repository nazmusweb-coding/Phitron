#include <iostream>

using namespace std;

void sorting(string& array)
{
    int freq[26] = {0};

    // Counting frequency
    for (char ch : array)
    {
        freq[ch-'a']++;
    }

    int j = 0;
    // Assigning chars one by one in order using their frequency
    for (char i = 'a'; i < 'z'; i++)
    {
        while (freq[i-'a'])
        {
            array[j++] = i;
            freq[i-'a']--;
        }
    }
}

// void sorting(int *array, int size)
// {
//     int sz = array[0];
//     for (int i = 0; i < size; i++)
//     {
//         sz = max(sz, array[i]);
//     }

//     int freq[sz+1] = {0};
//     int j = 0;

//     while (j < size)
//     {
//         freq[array[j++]]++;
//     }

//     j = 0;
//     for (int i = 0; i < sz+1; i++)
//     {
//         while(freq[i])
//         {
//             array[j++] = i;
//             freq[i]--;
//         }
//     }

//     // Without running sum it can be done!! but cumulative sum is for sake of stability so we should use it
// }


int main(void)
{
    string array;
    getline(cin, array);
    sorting(array);
    cout << array << endl;

    // using cumulative sum here means a lot value
    // algorithm breakers: anything other than small alphabets.
}