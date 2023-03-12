#include <stdio.h>
void main()
{
    char s1[200],s2[200];
    printf("Enter the string: ");
    gets(s1);
    int i;
    for (i = 0;s1[i]!='\0';i++)
        s2[i] = s1[i];
    s2[i]='\0';
    printf("The result is: %s\n",s2);
}