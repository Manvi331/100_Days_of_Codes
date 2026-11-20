
#include <stdio.h>
int main()
{
    int a[100], n, i, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    i = n - 1;

    while (i >= 0 && a[i] > num)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = num;
    n++;

    printf("Updated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
