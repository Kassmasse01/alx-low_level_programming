#include <stdio.h>

/**
 *main - main
 *Return: 0
 *Description - prints lower case and upper case alphabet
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	while (m <= 90)
	{
	putchar(m);
	m++;
	}
	putchar(10);
	return (0);
}
