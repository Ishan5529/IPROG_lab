#include <stdio.h>
int summ=0;
void sum(int n)
{
    if (n>=1)
    {
        summ+=n;
        return sum(n-1);
    }
    else
        printf("Sum is %d",summ);
}
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    sum(n);    
}