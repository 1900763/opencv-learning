
#include<stdio.h>
int main( )
{
	int b = 1;
	while ( b< 10)
	{
		int x = 1;
		while ( x <=b)
		{
			printf("%d*%d=%d", b, x, b * x);
			x++;
		}
		b++;
		printf("\n");
	}
	return 0;
}