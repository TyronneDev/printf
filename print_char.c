#include "main.h"
/**
 * print_char - prints character to stdout
 * @c: The character to print
 *
 * Return: 1 
 */
int print_char (va_list character)
{
	char c = va_arg(character, int);
	write(1, &c, 1);
	return(1);
}
