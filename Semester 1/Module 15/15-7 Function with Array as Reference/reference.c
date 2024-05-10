#include <stdio.h>
#include <string.h>

void fun(int *array, int size)
{
    array[0] = 500;
}


void fun1(char *array)
{
    array[0] = 'G';
}


int main()
{
    int array[] = {10, 20, 30};
    int size = sizeof(array)/sizeof(int);

    fun(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");



    char array1[20] = "Hello";
    
    fun1(array1);

    for (int i = 0; i < strlen(array1); i++)
    {
        printf("%c", array1[i]);
    }
    printf("\n");

    return 0;
}