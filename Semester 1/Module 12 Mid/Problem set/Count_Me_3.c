#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    char b[10001];
    int capitals = 0;
    int smalls = 0;
    int digits = 0;

    while (a)
    {
        scanf("%s", b);
        for (int i = 0; i < strlen(b); i++)
        {
            if (b[i] >= 'A' && b[i] <= 'Z')
            {
                capitals++;
            }
            else if (b[i] >= 'a' && b[i] <= 'z')
            {
                smalls++;
            }
            else
            {
                digits++;
            }
        }
        printf("%d %d %d\n", capitals, smalls, digits);
        capitals = smalls = digits = 0;
        a--;
    }

    return 0;
}