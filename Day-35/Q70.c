
#include <stdio.h>
int main()
{
    int a[100], b[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Invalid rotation count");
        return 0;
    }

    k = k % n;

    for (i = 0; i < n; i++)
    {
        b[(i + k) % n] = a[i];
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
