#include <stdio.h>
void main()
{
    FILE *f = fopen("test.txt","r");
    char s[200];
    int c=1,i;
    for(i=0;i<200;i++)
    {
        s[i] = fgetc(f);
        if (s[i] == EOF) break;
        if (s[i] == ' ') c++;
    }
    printf("Number of words = %d\nCharacters = %d",c,i);
}