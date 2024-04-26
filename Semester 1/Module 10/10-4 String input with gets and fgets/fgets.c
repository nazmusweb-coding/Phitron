#include <stdio.h>

int main()
{
    char a[10];
    fgets(a, 10, stdin); // fgets(array, char+null size, standard input output)
    printf("%s\n", a);

    return 0;
}