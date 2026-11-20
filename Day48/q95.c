#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100], temp[200];

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';

    strcpy(temp,a);
    strcat(temp,a);

    if(strlen(a)==strlen(b) &&
       strstr(temp,b)!=NULL)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
