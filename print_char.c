#include "main.h"

/**
*print_char - format c
* @args: valis
* Return:...
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
