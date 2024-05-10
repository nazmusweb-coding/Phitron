#include <stdio.h>

char capital_to_small(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return '0';
}

// int capital_to_small(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return c + 32;
//     return 0;
// }

// float capital_to_small(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return c + 32;
//     return 0;
// }

// double capital_to_small(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return c + 32;
//     return 0;
// }

// void capital_to_small(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         printf("Capital: %c\n", c + 32);
//     return;
// }

int main(void)
{
    printf("%c", capital_to_small('J'));
    // printf("%c", capital_to_small('D'));
    // printf("%c", capital_to_small('A'));    // prints null because of .000
    // printf("%c", capital_to_small('J'));    // prints null because of .000
    // capital_to_small('J');
    // capital_to_small('A');
    
    return 0;
}