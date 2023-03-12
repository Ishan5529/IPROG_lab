#include <stdio.h>
void main()
{
    char s1[200],s2[200];
    gets(s1);
    gets(s2);
    int a,b,c=0;
    for (int i=0;i<=200;i++)
    {   
        a=s1[i];
        b=s2[i];
        if (s1[i]=='\0' && s2[i]=='\0') break;
        else if (s1[i]=='\0')
        {
            c=-1;
            break;
        }
        else if (s2[i]=='\0')
        {
            c=1;
            break;
        }
        if (a==b)
            c=0;
        else if (a<b)
        {
            c=-1;
            break;
        }
        else
        {
            c=1;
            break;
        }
    }
    printf("%d",c);
}