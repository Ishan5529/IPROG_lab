#include <stdio.h>
void main()
{
	int n;
	printf("Enter Array Length : ");
	scanf("%d",&n);
	int a[2][n];
	for (int i=0;i<2;i++)
	{
		printf("\n\nEnter Temperatures for City %c.\n",65+i);
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n\n\nCity A        City B\n_____________________\n");
	for(int j=0;j<n;j++)
		printf("  %d\t|\t%d\n",a[0][j],a[1][j]);
}
