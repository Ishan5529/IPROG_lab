#include <stdio.h>
void main()
{
	int n;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int a[n],*p;
	for (int i=0;i<n;i++)
	{
		printf("Array Element : ");
		scanf("%d",&a[i]);
	}
	for (p=&a[n-1];p>=&a[0];p--)
		printf("%d\t",*p);
}
