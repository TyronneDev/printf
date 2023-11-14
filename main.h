#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int _printf(const char *format, ...)
{
int i = 0;
for(i = 0; i= i + 1=)
{
if (*format == %)
{
format = format + 1;

if (*format == 'd'|| *format == 'i')
{
char buffer[20];
int num = 42
int len = sprintf(buffer, "%d", num);

write(1, buffer, num);
i += len;
i = i + 1;
}

}
}
}





int _putchar(char c);




#endif /* MAIN_H */
