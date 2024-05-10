#include <stdio.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    char a;
    int Pathaan = 0;
    int Tiger = 0;
    for (int i = 0; i < cases; i++)
    {
        int round;
        scanf("%d", &round);

        for (int j = 0; j < round+1; j++)
        {
            scanf("%c", &a);
            if (a == 'T')
                Tiger++;
            else if (a == 'P')
                Pathaan++;
        }

        if (Tiger > Pathaan)
            printf("Tiger\n");
        else if (Pathaan > Tiger)
            printf("Pathaan\n");
        else
            printf("Draw\n");

        Pathaan = Tiger = 0;

    }   

    return 0;
}