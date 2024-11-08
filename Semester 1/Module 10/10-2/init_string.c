#include <stdio.h>

int main()
{
    char first[6] = "Nazmus";
    char last[5] = {'S', 'a', 'k', 'i', 'b'};
    for (int i = 0; i < sizeof(first)/sizeof(char); i++)
    {
        printf("%c", first[i]);
    }
    for (int i = 0; i < sizeof(last); i++)
    {
        printf("%c", last[i]);
    }

    return 0;
}