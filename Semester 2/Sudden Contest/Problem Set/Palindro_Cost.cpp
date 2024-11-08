#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

bool case1 (const string& str) // length-even and already palindrom 
{
    const int size = str.length();
    bool array[size] = {false};
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (str[i] == str[j])
            {
                array[i] = true;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] == false)
        {
            return false;
        }
    }
    return true;
}

bool case2 (const string& str) // length-odd and already palindrom 
{
    const int size = str.length();
    bool array[size] = {false};
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (str[i] == str[j])
            {
                array[i] = true;
            }
        }
    }
    int truecount = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == true)
        {
            truecount++;
        }
    }

    if (truecount-size == 1)
    {
        return true;
    }

    return false;
}

string convert(const string& str, int k) // time to check if we can do the work in given cost
{
    const int size = str.length();
    int total_cost = 0;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = str[i]-(96);
    }

    for (int i = 0; i < size/2; i++)
    {
        if (array[i] != array[size-i-1])
        {
            total_cost += (abs)(array[i]-array[size-i-1]);

            if (total_cost > k)
            {
                return "NO";
            }
        }
    }
    return "YES";
} 

int main()
{
    int Q;
    cin >> Q;
    cin.ignore();

    string s;
    int k;

    for (int i = 0; i < Q; i++)
    {
        cin >> s >> k;
        cin.ignore();

        if (case1(s))
        {
            cout << "YES" << endl;
        }
        else if (case2(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << convert(s, k) << endl;
        }
    }
    

    return 0;
}