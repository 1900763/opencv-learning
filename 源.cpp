#include <stdio.h>;
int main()
{
	for (int i = 1;i < 10;i++)
	{
		for (int b = 1;b <= i;b++)
		{
			printf("%dx%d=%d", i, b, i * b);
		}
		printf("\n");
	}
}
