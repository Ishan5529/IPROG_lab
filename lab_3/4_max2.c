#include <stdio.h>
void main()
{
	float a,b,big;
	printf("Enter 1st number : ");
	scanf("%f",&a);
	printf("Enter 2nd number : ");
	scanf("%f",&b);
	if (a>b)
		big=a;
	else
		big=b;
	printf("%f is greater.\n",big);
}
