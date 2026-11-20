
#include <stdio.h>
int main()
{
    int num, first, last, middle, place = 1;
    int result;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input");
    }
    else if (num < 10)
    {
        printf("After swapping = %d", num);
    }
    else
    {
        last = num % 10;
        first = num;

        while (first >= 10)
        {
            first = first / 10;
            place = place * 10;
        }

        middle = (num % place) / 10;
        result = last * place + middle * 10 + first;

        printf("After swapping = %d", result);
    }

    return 0;
}
