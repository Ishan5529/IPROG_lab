#include <stdio.h>
void main()
{
	char c;
	int ch;
	printf("Enter a character : ");
	scanf("%c",&c);
	ch=c;
	if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
		printf("%c is an Alphabet",c);
	else if (ch>=48 && ch<=57)
		printf("%c is a Digit",c);
	else
		printf("%c is a Special Character",c);
}
