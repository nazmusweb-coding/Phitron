#include <stdio.h>

int main()
{
    char c; //char[10000001] is not possible to save
    int alphabets[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        alphabets[c-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] != 0)
        {
            printf("%c : %d\n", i+97, alphabets[i]);
        }
    }
    

    return 0;
}