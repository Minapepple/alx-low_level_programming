#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int i = '1';
	int j = '0';

	for (j = '0'; j <= '8'; j++)
	{
		for (i = '1'; i <= '9'; i++)
		{
			if (!(i == j) || (j > i))
			{
				putchar(j);
				putchar(i);
				if (!(i == '9' && j == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
