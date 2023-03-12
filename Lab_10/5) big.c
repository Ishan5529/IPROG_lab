#include <stdio.h>
int bigg;
void big(int *p, int n)
{
   if (n==0)
    {
        printf("Largest element : %d",bigg);
        return;
    }
    if (bigg<=*p)
        bigg=*p;
    big(p+1,n-1);
}
void main()
{
    printf("Enter array size: ");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    bigg=a[0];
    big(a,n);
}