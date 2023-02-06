#include <stdio.h>
void main()
{
	int n,b,d,r=0;
	printf("Enter a 3 digit number : ");
	scanf("%d",&n);
	b=n;
	do
	{
		d=b%10;
		r=r*10+d;
		b/=10;
	}while (b!=0);
	printf("Reverse of %d is %d.\n",n,r);
}
