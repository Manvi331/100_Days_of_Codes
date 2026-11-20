#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, v=0, c=0;

    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        ch=str[i];

        if((ch>='a' && ch<='z') ||
           (ch>='A' && ch<='Z'))
        {
            if(ch=='a'||ch=='e'||ch=='i'||
               ch=='o'||ch=='u'||ch=='A'||
               ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d", c);
    return 0;
}
