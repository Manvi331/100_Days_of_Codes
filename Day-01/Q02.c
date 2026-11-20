
#include <stdio.h>
int main()
{
    int a, b, sum, diff, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", diff);
    printf("Product is %d\n", product);

    if (b != 0)
    {
        quotient = (float)a / b;
        printf("Quotient is %.2f", quotient);
    }
    else
    {
        printf("Division by zero is not possible");
    }

    return 0;
}
