#include <stdio.h>
void sort(int *a,int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=0;j<n-1;j++)
			if (a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
}
void main()
{
	int n;
	printf("Enter length of array : ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("Array Element : ");
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for (int i=0;i<n;i++)
		printf("%d\t",a[i]);
}
