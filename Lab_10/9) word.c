#include <stdio.h>
void main()
{
    char s[200];
    gets(s);
    int c=1;
    for (int i = 0; i < 200; i++)
    {
        if (s[i] == '\0') break;
        if (s[i] == ' ') c++;
    }
    printf("Number of words = %d\n", c);
}