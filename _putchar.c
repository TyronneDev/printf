#include <unistd.h>

/**
* _putchar - this function writes the character c to stdout
* @c: The character to print
*
* Return: 1 otherwise -1 if ther is an error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
