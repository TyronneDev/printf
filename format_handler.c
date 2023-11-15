#include "main.h"

/**
* format_handler - choses the operation that executes depending on switch case
* @position:pointer to the list value
* @type:switch case to be operated
* @list:value to be operated on
*
* Return: formatted output or -1 if it fails
*/
int format_handler(char type, va_list list, int *position)
{
switch (type)
{
case 'c':
*position = *position + 1;
return (print_char(list));
break;

case 's':
*position = *position + 1;
return (print_str(list));
break;

case '%':
*position = *position + 1;
return (print_percent(list));
break;

case 'd':
*position = *position + 1;
return (print_int(list));
break;

case 'i':
*position = *position + 1;
return (print_int(list));
break;

default:
break;
}
return (-1);
}
