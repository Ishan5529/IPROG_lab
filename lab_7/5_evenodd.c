#include <stdio.h>
void eve()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("%s",(n%2==0)?"Even":"Odd");
}
void main()
{
	eve();
}
