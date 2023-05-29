#include "main.h"

/**
 * print_mod - prints %
 * @format: format
 * @args: va_list
 * Return: number of characters to be printed
 */
int print_mod(char *format, va_list args)
{
	(void)format;
	(void)args;
	_putchar('%');
	return (1);
}
