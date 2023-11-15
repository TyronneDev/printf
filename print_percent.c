#include "main.h"

/**
* print_percent - this function writes the character % to stdout
* @list: unused argument
*
* Return: 1
*/

int print_percent(va_list list __attribute__((unused)))
{
char c = '%';

write(1, &c, 1);
return (1);
}
