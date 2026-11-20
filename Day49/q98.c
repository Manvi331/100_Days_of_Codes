#include <stdio.h>
int main()
{
    char str[100];
    int i, last=0, n=0;

    fgets(str,100,stdin);

    while(str[n]!='\0' && str[n]!='\n')
        n++;

    str[n]='\0';

    for(i=0; i<n; i++)
    {
        if(str[i]==' ' && i+1<n &&
           str[i+1]!=' ')
        {
            last=i+1;
        }
    }

    for(i=0; i<last; i++)
    {
        if(str[i]!=' ' &&
           (i==0 || str[i-1]==' '))
        {
            printf("%c. ", str[i]);
        }
    }

    printf("%s", str+last);
    return 0;
}
