#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        printf("%c\n", a+32);
    }
    else
    {
        printf("%c\n", a-32);
    }  

    return 0;
}