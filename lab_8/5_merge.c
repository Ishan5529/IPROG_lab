#include <stdio.h>
void main()
{
	int n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n],b[n],c[2*n];
	printf("\nEnter Elements of Array 1 : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter Elements of Array 2 : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&b[i]);

	for (int i=0;i<n;i++)
	{
		c[i]=a[i];
		c[n+i]=b[i];
	}
	for (int i=0;i<2*n;i++)
	{
		for (int j=0;j<(2*n-1);j++)
		{
			if (c[j]>c[j+1])
			{
				c[j] = c[j] + c[j+1];
				c[j+1] = c[j] - c[j+1];
				c[j] = c[j] - c[j+1];
			}
		}
	}
	printf("\n\nMerged Array : \n");
	for (int i=0;i<2*n;i++)
		printf("%d  ",c[i]);
	printf("\n\n");	
}
