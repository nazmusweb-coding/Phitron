#include <stdio.h>
#include <stdbool.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Ferot Ashbo\n");
        }
    }
    else
    {
        printf("Kothao Jabo na\n");
    }

    // in summary 2-10
    if (tk >= 1000)
    {
        printf("Ami pizza khabo\n");
    }

    if (tk >= 2000)
    {
        printf("Ami ghurte jabo\n");
    }

    bool h = 2 > 1;
    printf("%d", h);


    return 0;
}