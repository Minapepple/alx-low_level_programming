#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (j < i)
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
