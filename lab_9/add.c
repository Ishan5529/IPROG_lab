#include <stdio.h>
void main()
{
	int a,b,*p1,*p2,sum=0;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	sum=*p1+*p2;
	printf("Sum : %d\n",sum);
}
