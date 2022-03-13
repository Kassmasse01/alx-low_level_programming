#include <stdio.h>

/**
 *main - main
 *Return: 0
 *Description - prints lower case alphabet
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
	putchar(n);
	n--;
	}
	putchar(10);
	return (0);
}
