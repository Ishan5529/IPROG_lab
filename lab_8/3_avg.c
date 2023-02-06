#include <stdio.h>
void main()
{
	int n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	float a[n],sum=0;
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%f",&a[i]);
	for (int i=0;i<n;i++)
		sum+=a[i];
	printf("\n\nAverage of elements is %f",sum/n);
}
