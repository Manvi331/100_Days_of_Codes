#include <stdio.h>
int main()
{
    char str[200], ch;
    int i, start=0, n=0;
    int left, right;

    fgets(str,200,stdin);

    while(str[n]!='\0' && str[n]!='\n')
        n++;

    for(i=0; i<=n; i++)
    {
        if(str[i]==' ' || i==n)
        {
            left=start;
            right=i-1;

            while(left<right)
            {
                ch=str[left];
                str[left]=str[right];
                str[right]=ch;
                left++;
                right--;
            }
            start=i+1;
        }
    }

    str[n]='\0';
    printf("%s", str);
    return 0;
}#include <stdio.h>
int main()
{
    char str[200], ch;
    int i, start=0, n=0;
    int left, right;

    fgets(str,200,stdin);

    while(str[n]!='\0' && str[n]!='\n')
        n++;

    for(i=0; i<=n; i++)
    {
        if(str[i]==' ' || i==n)
        {
            left=start;
            right=i-1;

            while(left<right)
            {
                ch=str[left];
                str[left]=str[right];
                str[right]=ch;
                left++;
                right--;
            }
            start=i+1;
        }
    }

    str[n]='\0';
    printf("%s", str);
    return 0;
}
