#include "main.h"

/**
 * print_binary - Prints the binary representatioN
 * @n: The number to print in binary.
 * Return: no value
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}