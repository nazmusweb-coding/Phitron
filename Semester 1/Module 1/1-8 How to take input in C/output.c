#include <stdio.h>

int main()
{
    int rahim, karim;
    char c;
    float f;
    scanf("%d %f %d %c", &rahim, &f, &karim, &c);
    printf("%d %0.2f %d %c\n", rahim, f, karim, c);

    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d%% %d%%\n", a, b);

    int x, y;
    char p;
    scanf("%d%c %d%c", &x, &p, &y, &p); // good practice
    printf("%d%c %d%c\n", x, p, y, p);


    return 0;
}