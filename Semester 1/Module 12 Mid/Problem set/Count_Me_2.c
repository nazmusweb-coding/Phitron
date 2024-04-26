#include <stdio.h>

int main()
{
    char c;
    int consonant = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            consonant++;
        }
    }
    printf("%d", consonant);// different system counts more than 1 or less than 1 my system counts more than 1 and mid's less than 1

    return 0;
}