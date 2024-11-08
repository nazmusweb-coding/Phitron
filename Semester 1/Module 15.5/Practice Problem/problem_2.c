#include <stdio.h>

int my_len(char *p)
{
    int len = 0;
    while (p[len] != '\0')
        len++;

    return len;
}

int main()
{
    char string[20];
    scanf("%s", &string);
    printf("%d", my_len(string));

    return 0;
}