#include <stdio.h>
void main()
{
	int sum=0,n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (int i=0;i<n;i++)
		sum+=a[i];
	printf("\n\nSum of elements is %d",sum);	
}
