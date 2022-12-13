#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * main - check the code for 'Returns the value of the last digit'.
 * @n: input number has integer
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int ln = n % 10;
if (n < 0)
ln = ln * -1;
_putchar(ln + '0');
return (ln);
}
