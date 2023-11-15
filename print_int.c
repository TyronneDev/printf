#include "main.h"

/**
* positive - prints a positive integer to stdout
* print_int - this function writes the integer to stdout
* @figure: the positive or negative integer to be printed
* Return: the number of digits in the integer
*/

int positive(int figure)
{
int neg_pos = 1;
int temp = figure;
int division = 1;
int i = 0;

while (temp > 9)
{
temp = figure / 10;
division *= 10;
neg_pos++;
}
temp = 0;
i = neg_pos;

while (i != 0)
{
if (i == 1)
temp = (figure % 10);
else
{
temp = (figure / division);
division /= 10;
if ((neg_pos - i) > 0)
temp = (temp % 10);
}
temp += 48;
write(1, &temp, 1);
i--;
}

return (neg_pos);
}
/**
*negative - prints a negative integer to stdout
*@figure: the positive or negative integer to be printed
*Return: the number of digits in the integer
*/
int negative(int figure)
{
int neg_pos = 1;
int temp = (figure / -1);
int division = 1;
int i = 0;
char minus = 45;
figure = figure / -1;
while (temp > 9)
{
temp = temp / 10;
division *= 10;
neg_pos++;
}

temp = 0;
i = neg_pos;
write(1, &minus, 1);
while (i != 0)
{
if (i == 1)
temp = (figure % 10);
else
{
temp = (figure / division);
division /= 10;
if ((neg_pos - i) > 0)
temp = (temp % 10);
}
temp += 48;

write(1, &temp, 1);
i--;
}

return (neg_pos + 1);
}
/**
*print_int - this function writes the integer to stdout
*@list: a va_list containing the integer to be printed
* Return: the number of digits in the integer
*/
int print_int(va_list list)
{
int num = va_arg(list, int);

int neg_pos = 0;

if (num >= 0)
neg_pos = positive(num);

else
neg_pos = negative(num);

return (neg_pos);
}

