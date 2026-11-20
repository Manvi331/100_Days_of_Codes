
#include <stdio.h>
int main()
{
    int a, b, rem;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("HCF = %d", a);

    return 0;
}
