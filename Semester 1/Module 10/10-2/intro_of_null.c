#include <stdio.h>

int main()
{
    char first[7] = "Nazmus";   // last space will be allocated for null
    char last[6] = {'S', 'a', 'k', 'i', 'b'};   // last space will be allocated for null

    // char first[7] = "Nazmus\0"; same as the example
    // char last[6] = {'S', 'a', 'k', 'i', 'b', '\0'}; same as the example

    printf("%s ", first);   // for this we need to add null character
    printf("%s\n", last);   // for this we need to add null character
    puts(first);            // for this we need to add null character
    puts(last);             // for this we need to add null character

    return 0;
}