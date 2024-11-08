#include <stdio.h>
#include <string.h>
#define MAX 1001

int main()
{
    char first[MAX];
    char second[MAX];
    scanf("%s", first);
    scanf("%s", second);
    printf("%d %d\n", strlen(first), strlen(second));
    printf("%s %s", first, second);
    
    return 0;
}