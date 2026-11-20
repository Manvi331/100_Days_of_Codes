#include <stdio.h>
int main()
{
    char str[100];
    int i,j,k,n=0;

    fgets(str,100,stdin);

    while(str[n]!='\0' && str[n]!='\n')
        n++;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            for(k=i; k<=j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
