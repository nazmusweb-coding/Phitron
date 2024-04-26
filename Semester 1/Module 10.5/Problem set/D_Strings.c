#include <stdio.h>
#include <string.h>
#define MAX 11
#define MAX2 21

int main()
{
    char first[MAX];
    char last[MAX];
    char total[MAX2];
    scanf("%s%s", first, last);;
    printf("%d %d\n", strlen(first), strlen(last));
    int i = 0, j = 0;
    while (first[i] != '\0')
    {
        total[i] = first[i];
        i++;
    }
    while (last[j] != '\0')
    {
        total[i] = last[j];
        i++;
        j++;
    }
    total[i] = '\0';
    printf("%s\n", total);

    char temp = first[0];
    first[0] = last[0];
    last[0] = temp;
    
    printf("%s %s\n", first, last);

    return 0;
}