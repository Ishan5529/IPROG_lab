#include <stdio.h>
void main()
{
	int a[3][3];
	printf("Enter the Elements of matrix : \n");
	for (int i=0;i<3;i++)
	{
		printf("\n\nEnter Elements of row %d\n",i);
		for (int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
			printf("%d   ",a[i][j]);
		printf("\n\n");
	}
}
