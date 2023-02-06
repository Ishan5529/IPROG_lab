#include <stdio.h>
void main()
{
	float a[5];
	printf("Enter the elements of array :\n");
	for (int i=0;i<5;i++)
		scanf("%f",&a[i]);
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<4;j++)
		{
			if (a[j]>a[j+1])
			{
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];
			}
		}
	}
	for (int i=0;i<5;i++)
		printf("%f  ",a[i]);
}
