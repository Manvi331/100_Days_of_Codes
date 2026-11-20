#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, s;
    scanf("%d%d", &r, &c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(s=0; s<r+c-1; s++)
    {
        for(i=0; i<r; i++)
        {
            j=s-i;
            if(j>=0 && j<c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
