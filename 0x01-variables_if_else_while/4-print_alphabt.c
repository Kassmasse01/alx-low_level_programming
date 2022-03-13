#include <stdio.h>

/**
 *main - main
 *Return: 0
 *Description - prints lower case alphabet without "e & q"
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	n++;
	}
	putchar(10);
	return (0);
}
