#include <stdio.h>
#include <string.h>

int is_palindrome(char *string)
{
    int i = 0;
    int j = strlen(string)-1;

    while(i < j)
    {
        if (string[i] != string[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char st[1001];
    fgets(st, 1001, stdin);

    if (is_palindrome(st))
        printf("Palindrome"); 
    else
        printf("Not Palindrome");

    return 0;
}