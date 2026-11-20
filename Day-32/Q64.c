
#include <stdio.h>
int main()
{
    long long num;
    int count[10] = {0};
    int digit, i, max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    do
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    } while (num > 0);

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d", result);
    printf("\nFrequency = %d", max);
    return 0;
}
