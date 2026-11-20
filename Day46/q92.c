
#include <stdio.h>
int main()
{
    char str[100];
    int freq[26]={0};
    int i, flag=0;

    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-'a']++;

            if(freq[str[i]-'a']==2)
            {
                printf("%c", str[i]);
                flag=1;
                break;
            }
        }
    }

    if(flag==0)
        printf("No repeating character");

    return 0;
}
