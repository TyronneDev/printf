#include "main.h"

/**
* print_str -  writes string to stdout
* @list: value to print
*
* Return: 1 otherwise -1 if there is an error
*/

int print_str(va_list list)
{
int count = 0;
unsigned int j = 0;
char *string = "(null)";
char *str = va_arg(list, char *);

if (str == NULL)
{
while (j < 6)
{
write(1, &string[j], 1);
j = j + 1;
count = count + 1;
}
return (count);
}
while (*(str + j) != '\0')
{
write(1, &str[j], 1);
count = count + 1;
j = j + 1;
}

return (count);
}
