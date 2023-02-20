#include <stdio.h>
void main()
{
	int a,b,*p1,*p2;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	printf("Max : %d\n",((*p1>*p2)?*p1:*p2));
}
