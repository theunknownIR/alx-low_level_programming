#include <stdio.h>


int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 9; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{

			putchar((d % 10) + '0');
			putchar((d % 10) + '0');

			if (d == 8 && d == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
