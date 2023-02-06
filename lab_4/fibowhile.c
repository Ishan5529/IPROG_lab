#include <stdio.h>
void main()
{
	int a=0,b=1,c=0;
	while (c<101)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
	}	
}
