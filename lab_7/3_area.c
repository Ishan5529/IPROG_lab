#include <stdio.h>
int area(int s)
{
	int a=s*s;
	return a;
}
void main()
{
	int a,s;
	printf("Enter side : ");
	scanf("%d",&s);
	a=area(s);
	printf("Area : %d",a);
}
