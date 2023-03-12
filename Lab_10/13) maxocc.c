#include <stdio.h>
int count(char *s,char c)
{
    int countt=0;
    for (int i=0;s[i]!='\0';i++)
        if (s[i]==c)
            countt++;
    return countt;
}
void main()
{
    int c,big;
    char s[200];
    gets(s);
    for (int i=0;s[i]!='\0';i++)
    {
        c=count(s,s[i]);
        if (c>=big) c=big;
    }
    printf("Highest Occurence: %d\n",c);
}