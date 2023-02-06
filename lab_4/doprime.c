#include <stdio.h>
void main()
{
	int c,i=2,j;
	do
	//while (i<100)
	{
		c=0;
		j=1;
		do		
		//while (j<i)
		{
			if (i%j==0)
				c++;
			j++;
		}while (j<i);
		if (c==1)
			printf("%d\n",i);
		i++;
	}while (i<100);
}
