#include <stdio.h>
void main()
{
	int a=0,b=1,c;
	for (int c=0;c<101;c=a+b)
	{
		printf("%d\n",c);
		a=b;
		b=c;
	}	
}
