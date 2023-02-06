#include <stdio.h>
void fact(int n)
{
	int f=1,sum=0;
	for (int i=1;i<=n;i++)
	{
		sum+=f;
		f*=i;
	}
	printf("Sum : %d",sum);
}
void main()
{
	int n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	fact(n);
}
