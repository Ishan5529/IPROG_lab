#include <stdio.h>
void main()
{
	float num,d;
	int n;
	printf("Enter a number : ");
	scanf("%f",&num);
	n=num;
	d=num-n;
	printf("Integral part of %f is %d and fractional part is %f.\n",num,n,d);
}
