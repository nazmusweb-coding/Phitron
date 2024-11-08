#include <stdio.h>
#define MAX 100001
int main()
{
    char st[MAX];
    fgets(st, MAX, stdin);
    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
        {
            st[i] += 32;
        }
        else if (st[i] >= 'Z')
        {
            st[i] -= 32;
        }
        else if (st[i] == 44)
        {
            st[i] = ' ';
        }
    }
    
    puts(st);
    
    return 0;
}