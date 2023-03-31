#include "main.h"

/**
  * print_char - prints out a character value
  * @args: variadic parameter
  *
  * Return: number of characters printed
  */

int print_char(va_list args)
{
	int count = 0;

	char a = va_arg(args, int);

	if (a)
	{
		count++;
		write(1, &a, 1);
		return (count);
	}
	return (0);
}
