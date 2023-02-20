#include <stdio.h>
void main()
{
	int n;
	printf("Enter length of array : ");
	scanf("%d",&n);
	int a[n],*p;
	p=a;
	for (int i=0;i<n;i++)
	{
		printf("Array Element : ");
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		printf("%d\t",*p);
		p=p+1;
	}
}
