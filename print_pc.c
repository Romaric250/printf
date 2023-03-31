#include "main.h"

/**
  * print_pc - prints out the percentage symbol
  * @args: holds the argument we want to print out
  *
  * Return: number of values printed
  */

int print_pc(va_list args)
{
	int a = 0;
	a++;

	write(1, "%%", 1);

	return(a);

}
