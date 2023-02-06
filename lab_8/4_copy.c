#include <stdio.h>
void main()
{
	int n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("\nEnter Elements of Array : \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (int i=0;i<n;i++)
		b[i]=a[i];
	printf("\n\nCopied Array : \n");\
	for (int i=0;i<n;i++)
		printf("%d  ",b[i]);
	printf("\n");
}
