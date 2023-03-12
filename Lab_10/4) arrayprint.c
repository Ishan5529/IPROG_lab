#include <stdio.h>
void print(int *p,int n)
{
    if (n==0)
    {
        return;
    }
    n--;
    printf("%d\n", *p);
    print((p+1),n);
}
void main()
{
    int a[]={1,5,3,9};
    print(a,4);
}