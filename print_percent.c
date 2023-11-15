#include "main.h"

/**
 * print_percent - writes the character % to stdout
 * @c: The character to be printed
 *
 * Return: 1 
 */

int print_percent(va_list list __attribute__((unused)))
{
	char c = '%';

	write(1, &c, 1);
	return (1);
}
