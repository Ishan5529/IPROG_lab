#include <stdio.h>
void main()
{
    char s[200];
    int c=1;
    printf("Enter the string: ");
    gets(s);
    for (int i=0;i<=200;i++)
        if (s[i] == '\0')
        {
            printf("Length = %d\n",i);
            c=0;
            break;
        }
    if (c) 
        printf("Length = 200");
}