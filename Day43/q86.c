#include <stdio.h>
int main()
{
    char str[100];
    int i, n=0, flag=1;

    fgets(str,100,stdin);

    while(str[n]!='\0' && str[n]!='\n')
    {
        n++;
    }

    for(i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
