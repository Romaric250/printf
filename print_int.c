#include "main.h"

/**
  * print_int - returns an integer value
  * @args: variadic parameter
  *
  * Return: the number of values printed
  */

int print_int(va_list args)
{
	int n, num, ld;
	int dig;
	int exp, con;
	int val = 1;

	n = va_arg(args, int);

	ld = n % 10;
	con = 1;
	exp = 1;
	n = n / 10;
	num = n;

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			con++;
		}
	}
	_putchar(ld + '0');
	return (con);
}
