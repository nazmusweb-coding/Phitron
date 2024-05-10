#include <stdio.h>
#include <limits.h>

void func(int n)
{
    int input;
    int MAX = INT_MIN;
    int MIN = INT_MAX;

    if (n == 1)
    {
        scanf("%d", &input);
        printf("%d %d", input, input);
        return;
    }
    while(n)
    {
        scanf("%d", &input);
        if (input > MAX)
            MAX = input;
        else if (input < MIN)
            MIN = input;
        n--;
    }
    printf("%d %d", MIN, MAX);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    func(n);

    return 0;
}