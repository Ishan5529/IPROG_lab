#include <stdio.h>
void main()
{
	int a[3][3],b[3][3],sum=0;
	printf("Enter elements of matrix 1.\n");
	for (int i=0;i<3;i++)
	{
		printf("Row %d\n",i+1);
		for (int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nEnter elements of matrix 2.\n");
	for (int i=0;i<3;i++)
	{
		printf("Row %d\n",i+1);
		for (int j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	printf("\n\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
			printf("%d\t",a[i][j]+b[i][j]);
		printf("\n");
	}		
}
