#include <stdio.h>
void main()
{
	int ch;
	float h,b,a;
	printf("Find the area of :\n1. Triangle\n2. Square\n3. Circle\n\nEnter your choice [1/2/3] : ");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			printf("\nEnter Height of traingle : ");
			scanf("%f",&h);
			printf("Enter Base of triangle   : ");
			scanf("%f",&b);
			a=(h*b)/2;
			printf("Area is : %f\n",a);
			break;
		case 2:
			printf("\nEnter Side of Square : ");
			scanf("%f",&h);
			a=h*h;
			printf("Area is : %f\n",a);
			break;
		case 3:
			printf("\nEnter Radius of Circle : ");
			scanf("%f",&h);
			a=(h*h*22)/7;
			printf("Area is : %f\n",a);
			break;
		default:
			printf("\nInvalid Choice\n");
	}
}
