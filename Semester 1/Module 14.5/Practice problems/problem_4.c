#include <stdio.h>

// char small_to_capital(char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return c - 32;
//     return '0';
// }

// int small_to_capital(char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return c - 32;
//     return -1;
// }

// float small_to_capital(char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return c - 32;
//     return -1;
// }

// double small_to_capital(char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return c - 32;
//     return -1;
// }

void small_to_capital(char c)
{
    if (c >= 'a' && c <= 'z')
        printf("Capital: %c\n", c - 32);
    return;
}

int main(void)
{
    // printf("%c", small_to_capital('j'));
    // printf("%c", small_to_capital('d'));
    // printf("%c", small_to_capital('a'));    // prints null because of .000
    // printf("%c", small_to_capital('j'));    // prints null because of .000
    small_to_capital('j');
    small_to_capital('a');
    
    return 0;
}