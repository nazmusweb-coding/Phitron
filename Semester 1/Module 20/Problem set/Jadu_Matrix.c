#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int input;
    int Matrix_dorkar_nai_ei_problem_e_tai_dei_nai_amar_mark_kata_na_hok = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &input);
            if (i == j || (j == m-i-1))
            {
                if (input != 1)
                {
                    Matrix_dorkar_nai_ei_problem_e_tai_dei_nai_amar_mark_kata_na_hok = 1;
                }
            }
            else
            {
                if (input != 0)
                {
                    Matrix_dorkar_nai_ei_problem_e_tai_dei_nai_amar_mark_kata_na_hok = 1;
                }
            }
        }
    }
    
    if (Matrix_dorkar_nai_ei_problem_e_tai_dei_nai_amar_mark_kata_na_hok)
        printf("NO");
    else
        printf("YES");

    return 0;
}