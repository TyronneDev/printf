#include "main.h"

/**
 * _printf - write output to stdout, the standard output stream
 *
 * @format: character string
 *
 * Return: the number of characters printed excluding the null byte
 *
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;
	int i = 0;
	int output_printed = 0;

	va_start(list, format);
	while (*(format+i) != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			output_printed++;
		}
		else
		{
			count = format_handler(format[i+1], list, &i);
			if (count == -1)
			{
				return (-1);
			}
			output_printed = output_printed + count;
		}
		i++;
	}
	va_end(list);
	return (output_printed);
}
