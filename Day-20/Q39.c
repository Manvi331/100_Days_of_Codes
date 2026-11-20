
#include <stdio.h>
int main()
{
    int num, rem, product = 1, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    while (num > 0)
    {
        rem = num % 10;

        if (rem % 2 != 0)
        {
            product = product * rem;
            count++;
        }

        num = num / 10;
    }

    if (count == 0)
        printf("No odd digits");
    else
        printf("Product = %d", product);

    return 0;
}

