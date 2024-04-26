#include <stdio.h>
#define MAX 1000001

int main()
{
    char st[MAX];
    int i = 0;
    while (scanf("%c", &st[i]) != EOF && st[i] != '\\')
    {
        i++;
    }
    st[i] = '\0';
    
    printf("%s", st);

    return 0;
}