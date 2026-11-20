
#include <stdio.h>
int main()
{
    int num, original, temp, rem;
    int digits = 0, i, power, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    if (num < 0)
    {
        printf("Not an Armstrong number");
    }
    else
    {
        do
        {
            digits++;
            temp = temp / 10;
        } while (temp > 0);

        temp = num;

        do
        {
            rem = temp % 10;
            power = 1;

            for (i = 1; i <= digits; i++)
            {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        } while (temp > 0);

        if (sum == original)
        {
            printf("Armstrong number");
        }
        else
        {
            printf("Not an Armstrong number");
        }
    }

    return 0;
}
