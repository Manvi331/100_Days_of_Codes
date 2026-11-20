
#include <stdio.h>
int main()
{
    int a, b, x, y, rem, gcd;
    long long lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;

    if (x == 0 || y == 0)
    {
        printf("LCM = 0");
    }
    else
    {
        while (y != 0)
        {
            rem = x % y;
            x = y;
            y = rem;
        }

        gcd = x;
        lcm = (long long)(a / gcd) * b;

        if (lcm < 0)
            lcm = -lcm;

        printf("LCM = %lld", lcm);
    }

    return 0;
}
