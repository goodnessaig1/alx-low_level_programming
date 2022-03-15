#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int test;

if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else
{
	test = -1;
	_putchar('-');
}

return (test);
}
