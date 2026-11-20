#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, space=0, digit=0, special=0;

    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        ch=str[i];

        if(ch==' ')
            space++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(!((ch>='a' && ch<='z') ||
                  (ch>='A' && ch<='Z')) &&
                  ch!='\n')
            special++;
    }

    printf("Spaces = %d\n", space);
    printf("Digits = %d\n", digit);
    printf("Special = %d", special);
    return 0;
}
