#include <stdio.h>
void swap()
{
	int a,b;
	printf("Enter 2 number : ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped : %d\t%d",a,b);
}
void main()
{
	swap();
}
