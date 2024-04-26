#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 21

int main()
{
    char first[MAX], last[MAX];
    scanf("%s%s", first, last);

    int i = 0;
    
    while (1)
    {
        if (first[i] == '\0')
        {
            printf("%s", first);
            break;
        }
        else if (last[i] == '\0')
        {
            printf("%s", last);
            break;
        }
        else if (first[i] > last[i])
        {
            printf("%s\n", last);
            break;
        }
        else if (first[i] < last[i])
        {
            printf("%s\n", first);
            break;
        }
        i++;
    }
    
    return 0;
}