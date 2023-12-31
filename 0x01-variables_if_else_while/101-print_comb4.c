#include <stdio.h>
/**
 * main - 'prints all possible different combinations of three digits'
 * Return: always 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (b = c + 1; b <= '9'; b++)
		{
			for (a = b + 1; a <= '9'; a++)
			{
				if (!(a == b) || (b == c) ||
						(b > a) || (c > b))
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (!(a == '9' && b == '8' && c == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
