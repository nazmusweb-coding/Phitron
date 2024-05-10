#include <stdio.h>

int calLen(char *n, int len)
{
    if (n[len] == '\0') return len;
    calLen(n, len+1);
}

int main()
{
    char name[20] = "";
    printf("%d", calLen(name, 0));

}