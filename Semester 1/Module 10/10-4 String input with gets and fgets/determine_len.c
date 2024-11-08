#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];
    scanf("%s", array);

    int i = 0, count = 0;

    while (array[i] != '\0')
    {
        i++;
        count++;
    }
    for (count = 0; array[count] != '\0'; count++);

    count = strlen(array);
    
    printf("%d", count);

    return 0;
}