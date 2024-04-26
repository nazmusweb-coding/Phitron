#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int first = (a%10);
    int second = ((a-(a%10))*0.1);
    if (first%second == 0 || second%first == 0)
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}