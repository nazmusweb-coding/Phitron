#include <stdio.h>

int main()
{
    char ar[5];
    int size = sizeof(ar)/sizeof(char); // it just returns the full size of the  array.
    printf("%d\n", size);
    printf("%d", sizeof(ar));

    return 0;
}