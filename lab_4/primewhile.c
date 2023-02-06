#include <stdio.h>
void main()
{
	int c,i=1,j;
	while (i<100)
	{
		c=0;
		j=1;
		while (j<i)
		{
			if (i%j==0)
				c++;
			j++;
		}
		if (c==1)
			printf("%d\n",i);
		i++;
	}
}
