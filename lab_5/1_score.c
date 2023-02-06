#include <stdio.h>
void main()
{
	int m,n;
	printf("Enter Marks : ");
	scanf("%d",&m);
	n=m/10;
	switch (n)
	{
		case 10:
		case 9:
			printf("O Grade");
			break;
		case 8:
			printf("E Grade");
			break;
		case 7:
			printf("A Grade");
			break;
		case 6:
			printf("B Grade");
			break;
		case 5:
			printf("C Grade");
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("Fail");
	}
}
