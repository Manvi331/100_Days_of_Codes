
#include <stdio.h>
int main()
{
    int num, rem, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input");
    }
    else
    {
        if (num == 0)
        {
            binary = 0;
        }

        while (num > 0)
        {
            rem = num % 2;
            binary = binary + rem * place;
            place = place * 10;
            num = num / 2;
        }

        printf("Binary = %d", binary);
    }

    return 0;
}
