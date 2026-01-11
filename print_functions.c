#include "main.h"

/**
 * print_char - Prints a character
 * @args: List of arguments
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a string
 * @args: List of arguments
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @args: List of arguments (unused)
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * print_int - Prints an integer
 * @args: List of arguments
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;
	unsigned int divisor = 1;
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}

	temp = num;
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
		count++;
	}

	return (count);
}
