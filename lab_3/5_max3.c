#include <stdio.h>
void main()
{
	float a,b,c,big;
	printf("Enter 3 numbers : \n");
	scanf("%f%f%f",&a,&b,&c);
	if (a>b)
		if (a>c)
			big=a;
		else
			big=c;
	else
		if (b>c)
			big=b;
		else
			big=c;
	printf("%f is greater.\n",big);
}
