#include <stdio.h>
void main()
{
	int n,r;
	printf("Enter a number : ");
	scanf("%d",&n);
	r=(n%10)*100 + ((n/10)%10)*10 + n/100;
	printf("Reverse number of %d is %d.\n",n,r);
}
