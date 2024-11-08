#include <stdio.h>

void calculator(double a, double b, char operator)
{
    if (operator == '+')
    printf("%0.0lf %c %0.0lf = %0.0lf\n", a, operator, b, a + b);
    else if (operator == '-')
    printf("%0.0lf %c %0.0lf = %0.0lf\n", a, operator, b, a - b);
    else if (operator == '*')
    printf("%0.0lf %c %0.0lf = %0.0lf\n", a, operator, b, a * b);
    else if (operator == '/')
    printf("%0.0lf %c %0.0lf = %.2lf\n", a, operator, b, a / b);
    else return;
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    calculator(a, b, '+');
    calculator(a, b, '-');
    calculator(a, b, '*');
    calculator(a, b, '/');

    return 0;
}