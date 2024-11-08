#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger Khabo\n");
    }
    else if (tk >= 50)
    {
        printf("Fuchka Khabo\n");
    }
    else if (tk >= 20)
    {
        printf("Ice cream khabo\n");
    }
    else
    {
        printf("Khabo na\n");
    }
    
}