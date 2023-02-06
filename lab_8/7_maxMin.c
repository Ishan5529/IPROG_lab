#include <stdio.h>
void main()
{
	int big,small,n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	big=small=a[0];
	for (int i=0;i<n;i++)
	{
		if (big<a[i])
			big=a[i];
		if (small>a[i])
			small=a[i];
	}
	printf("\n\nMax = %d\nMin = %d\n",big,small);	
}
