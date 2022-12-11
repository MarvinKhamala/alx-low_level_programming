#include <stdio.h>
/**
 * main - main block
 * Description: Print all combinations of two digits
 * Numbers separated by comma
 * Numbers separated by spaces
 * 10 and 01 considered same combination of two different digits
 * Only print smallest combination
 * Numbers printed in ascending orde
 * Only putchar is allowed
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if  (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');
	return (0);
}
