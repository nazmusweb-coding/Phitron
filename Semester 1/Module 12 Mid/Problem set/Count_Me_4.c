#include <stdio.h>

int main()
{
    char a;
    int alphabet[26] = {0};
    while (scanf("%c", &a) != EOF)
    {
        alphabet[a-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != 0)
        {
            printf("%c - %d\n", i+97, alphabet[i]);
        }
    }

    return 0;
}