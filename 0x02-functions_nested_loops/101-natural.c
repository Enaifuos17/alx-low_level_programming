#include <stdio.h>

int main(void)
{
	int res = 0, i;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf("%d\n", res);
}
