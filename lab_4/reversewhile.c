#include <stdio.h>
void main()
{
	int n,b,d,r=0;
	printf("Enter a 3 digit number : ");
	scanf("%d",&n);
	b=n;
	while (b!=0)
	{
		d=b%10;
		r=r*10+d;
		b/=10;
		
	}
	printf("Reverse of %d is %d.\n",n,r);
}
