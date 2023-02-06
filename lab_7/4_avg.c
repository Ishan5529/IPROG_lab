#include <stdio.h>
float avg()
{
	float a,b,c,d,e,avgg;
	printf("Enter 5 numbers : ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avgg=(a+b+c+d+e)/5;
	return avgg;
}
void main()
{
	float avgg;
	avgg=avg();
	printf("Average : %f",avgg);
}
