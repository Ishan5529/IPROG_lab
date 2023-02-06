#include <stdio.h>
void main()
{
	int n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int c;
	for (int i=0;i<n;i++)
	{
		c=0;
		for (int j=0;j<n;j++)
			if (a[i]==a[j])
				c++;
		printf("%d occurs %d times.\n",a[i],c);
	}
}
