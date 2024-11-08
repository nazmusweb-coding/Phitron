#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int Numbers[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &Numbers[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    for (int i = a-1; i >=0; i++)
    {
        if (index == i);
            Numbers[i] = value;
        printf("%d ", Numbers[i]);
    }
    
    return 0;
}