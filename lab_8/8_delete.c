#include <stdio.h>
void main()
{
	int n,d;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n],c[n-1];
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the index to be deleted : ");
	scanf("%d",&d);
	for (int i=0;i<n-1;i++)
	{
		if (i<d)
			c[i]=a[i];
		else
			c[i]=a[i+1];
	}
	printf("\nNew Array : \n");
	for (int i=0;i<n-1;i++)
		printf("%d  ",c[i]);
	printf("\n\n");
}
