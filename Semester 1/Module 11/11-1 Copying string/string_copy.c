#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    strcpy(a, b);   // builtin function, it does not check any sizes

    printf("%s %s\n", a, b);


    return 0;
}