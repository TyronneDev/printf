#include "main.h"

/**
* print_char - this function takes a character and prints it to stdout.
* @character: The character to be printed.
* Return: 1 upon successful printing.
*/

int print_char(va_list character)
{
char c = va_arg(character, int);

write(1, &c, 1);

return (1);
}
