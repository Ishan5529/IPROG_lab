#include <stdio.h>
int gcdd;
void gcd(int a,int b,int c,int n)
{
    if (n==a || n==b || n==c) return;
    if (a%n==0&&b%n==0&&c%n==0) gcdd=n;
    gcd(a,b,c,n+1);
}
void main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    gcd(a,b,c,1);
    printf("%d",gcdd);
}