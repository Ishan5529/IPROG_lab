#include <stdio.h>
void main()
{
    FILE *f = fopen("test.txt","w");
    char s[200];
    gets(s);
    fputs(s,f);
    fputchar('\0');
    fclose(f);
}