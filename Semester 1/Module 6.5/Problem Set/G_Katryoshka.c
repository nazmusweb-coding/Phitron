#include <stdio.h>
#include <math.h>

int main()
{
    long long eye, mouth, body;
    scanf("%lld%lld%lld", &eye, &mouth, &body);

    long long res = 0;
    if (eye == 0 || body == 0)
    {
        printf("0");
    }
    else{
        if ((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye)
            || (mouth < body && mouth >= eye))
        {
            if (log(eye) > log(body))
                res += body;
            else 
                res += eye;
            printf("%lld", res);
        }
        else if (mouth < body && mouth < eye)
        {
            res = mouth;
            eye -= mouth;
            body -= mouth;
            if (log(eye/2) > log(body))
                res += body;
            else 
                res += eye/2;
            printf("%lld", res);
        }
    }

    return 0;
}