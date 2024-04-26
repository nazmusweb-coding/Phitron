#include <stdio.h>

int main()
{
    char a[10];
    gets(a); // it can take extra input so not good!
    printf("%s\n", a);

    return 0;
}