#include<stdio.h>
/**
 *main - outputs size
 *Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longInt;
	long long int longLongInt;

	printf("Size of a char: %zu byte\n", sizeof(charType)"(s)");
	printf("Size of an int: %zu bytes\n", sizeof(intType)"(s)");
	printf("Size of a long int: %zu bytes\n", sizeof(longInt)"(s)");
	printf("Size of a long long int: %zu bytes\n", sizeof(longLongInt)"(s)");
	printf("Size of a float: %zu byte\n", sizeof(float)"(s)");
	return (0);
}
