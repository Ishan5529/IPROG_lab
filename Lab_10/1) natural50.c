#include <stdio.h>
int summ=0;
void sum(int n)
{
    if (n<=50)
    {
        summ+=n;
        return sum(n+1);
    }
    else
        printf("Sum is %d",summ);
}
void main()
{
    sum(1);    
}