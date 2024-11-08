#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Numbers[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Numbers[i]);
    }

    int key, answer = -1;
    scanf("%d", &key);
    for (int i = 0; i < N; i++)
    {
        if (key == Numbers[i]){
            answer = i;
            break;;
        }
    }
    printf("%d", answer);

    return 0;
}