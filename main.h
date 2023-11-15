#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);
int print_char (va_list character);
int format_handler (char type, va_list list, int *position);
int _putchar(char c);
int print_str(va_list list);
int print_percent(va_list list __attribute__((unused)));
int print_int(va_list list);

#endif /* MAIN_H */
