
#include <stdio.h>
int main()
{
    float l, b, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area is %.2f\n", area);
    printf("Perimeter is %.2f", perimeter);

    return 0;
}
