
#include <stdio.h>
int main()
{
    long long num, temp, complement = 0, place = 1;
    int rem, valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    temp = num;

    if (num < 0)
        valid = 0;

    while (temp > 0)
    {
        rem = temp % 10;

        if (rem != 0 && rem != 1)
        {
            valid = 0;
            break;
        }

        temp = temp / 10;
    }

    if (valid == 0)
    {
        printf("Invalid binary number");
    }
    else
    {
        do
        {
            rem = num % 10;
            complement = complement + (1 - rem) * place;
            place = place * 10;
            num = num / 10;
        } while (num > 0);

        printf("1's Complement = %lld", complement);
    }

    return 0;
}

