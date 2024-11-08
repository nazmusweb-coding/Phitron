#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;
    int *ptr2 = ptr;

    printf("X's address                 - %p\n", &x);
    printf("ptr's containting address   - %p\n", ptr);
    printf("ptr's own address           - %p\n", &ptr);
    printf("Ptr2's containting address  - %p\n", ptr2);
    printf("ptr2's own address          - %p\n", &ptr2);

    *ptr2 = 200;

    printf("X's value   %d\n", x);


    return 0;
}
