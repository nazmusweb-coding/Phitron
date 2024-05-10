#include <stdio.h>
#include <string.h>

void fun (char *c)
{
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", c[i]);
    }
    printf("\n");
}

int main()
{
    char a[20] = "Hello";
    //int size = sizeof(a)/sizeof(char); // this is not for string!!!
    fun(a);
    
    return 0;
}