#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 97 && a <= 122)
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else if (a >=65 && a <= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else
    {
        printf("IS DIGIT\n");
    }

    return 0;
}