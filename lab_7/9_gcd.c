#include <stdio.h>
int gcD(int a, int b)
{
	int gcd=1;
	for (int i=1;i<=a;i++)
		if (a%i==0 && b%i==0)
			gcd=i;
	return gcd;
}
void main()
{
	int a,b,gcd;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	gcd=gcD(a,b);
	printf("GCD : %d",gcd);
}
