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
	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longInt));
	printf("Size of a long long int: %zu bytes\n", sizeof(longLongInt));
	printf("Size of a float: %zu byte\n", sizeof(float));
	return (0);
}
