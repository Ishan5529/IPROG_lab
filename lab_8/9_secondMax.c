#include <stdio.h>
void main()
{
	int big,big2,n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	big=big2=a[0];
	for (int i=0;i<n;i++)
		if (big<a[i])
			big=a[i];
		else
			big2=a[i];
	for (int i=0;i<n;i++)
		if (big2<=a[i] && a[i]<big)
			big2=a[i];
	printf("\n\nSecond Max = %d\n\n",big2);	
}
