#include <stdio.h>
void main()
{
    char s[200];
    printf("Enter the string: ");
    gets(s);
    int a,ac=0,n=0,c=0;
    for (int i=0;s[i]!='\0'; i++)
    {
        a=s[i];
        if (a>=65 && a<=90 || a>=97 && a<=122) 
            ac++;
        else if (a>=48 && a<=57)
            n++;
        else 
            c++;
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d\n",ac,n,c);
}