#include <stdio.h>
void main()
{
    FILE *f = fopen("test.txt","r");
    char s[200];
    for(int i=0;i<200;i++)
    {
        s[i] = fgetc(f);
        if (s[i] == EOF) break;
        putchar(s[i]);
    }
}