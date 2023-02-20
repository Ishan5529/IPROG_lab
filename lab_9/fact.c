#include <stdio.h>
void main()
{
	long int a,f=1,*p;
	printf("Enter a number : ");
	scanf("%ld",&a);
	p=&a;
	for (long int i=1;i<=*p;i++)
		f*=i;
	printf("Factorial : %ld\n",f);
}
