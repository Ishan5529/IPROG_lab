#include <stdio.h>
int area(int s)
{
	int a=s*s;
	return a;
}
void main()
{
	int a,s;
	printf("Enter Number : ");
	scanf("%d",&s);
	a=area(s);
	printf("Square : %d",a);
}
