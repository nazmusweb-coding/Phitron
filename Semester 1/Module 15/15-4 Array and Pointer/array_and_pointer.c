#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    printf("Array's 0th index address   - %p\n", &array[0]);
    printf("Array's address             - %p\n", &array);
    // means array's 0th index refers the whole array address like a pointer
    printf("Array's 0th index value     - %d\n", array[0]);
    printf("Array's value               - %d\n", *array); // see works like pointer

    // printing all value of the array using pointer

    printf("1 st value - %d\n", *array);
    printf("2 nd value - %d\n", *(array+1));
    printf("3 rd value - %d\n", *(array+2));
    printf("4 th value - %d\n", *(array+3));
    printf("5 th value - %d\n", *(array+4));

    // *(array+1)-> array[1];
    // *(1+array)-> 1[array];

    printf("%d\n", *(1 + array));
    printf("%d\n", 1[array]); // thats new thing i learned
    

    return 0;
}