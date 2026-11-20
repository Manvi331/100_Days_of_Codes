
#include <stdio.h>
int main()
{
    int num, original, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num < 0)
    {
        printf("Not a palindrome");
    }
    else
    {
        while (num > 0)
        {
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num / 10;
        }

        if (original == reverse)
        {
            printf("Palindrome number");
        }
        else
        {
            printf("Not a palindrome");
        }
    }

    return 0;
}
