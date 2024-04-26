#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if (a != 'z')
        printf("%c", (char)(a+1));
    else
        printf("a");
    
    return 0;
}