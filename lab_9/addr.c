#include <stdio.h>
int sum(int *a,int *b)
{
	return *a+*b;
}

void main()
{
	int a,b,sum1=0;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	sum1=sum(&a,&b);
	printf("Sum : %d\n",sum1);
}
