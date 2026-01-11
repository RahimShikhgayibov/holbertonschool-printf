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

	/* Mənfi ədədləri yoxlayırıq */
	if (n < 0)
	{
		_putchar('-');
		num = -n; /* unsigned int-ə çeviririk ki, INT_MIN xətası olmasın */
		count++;
	}
	else
	{
		num = n;
	}

	/* Ədədin mərtəbəsini tapırıq (məsələn 123 üçün divisor = 100) */
	unsigned int temp = num;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	/* Rəqəmləri tək-tək çap edirik */
	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
		count++;
	}

	return (count);
}
