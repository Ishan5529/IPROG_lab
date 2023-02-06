#include <stdio.h>
int sum(int a, int b)
{
	int s=a+b;
	return s;
}
void main()
{
	int a,b,s;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("Sum is : %d",s);
}
