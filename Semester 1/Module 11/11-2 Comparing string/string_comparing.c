#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    int i = 0, isEqual = 1;
    while (1)
    {
        if (a[i]=='\n' && b[i]=='\n')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')        // since its lexicographical comparison which comes first is big!(means smaller ascii value wins)
        {
            printf("Second string is bigger\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("First string is bigger\n");
            break;
        }
        
        i++;
    }

    printf("%d",strcmp(a, b));
    return 0;
}