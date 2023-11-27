#include "main.h"
/**
* _printf - Function we created for printf.
* @format: Character string.
* Return: Return value -1 if character printed fails.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				int length = 0;
				while (str[length] != '\0')
					length++;
				write (1, str, length);
				count += length;
			}
			else if (*format == '%')
			{
				write (1, format, 1);
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				if (num < 0)
				{
					write(1, "-", 1);
					count++;
					num = -num;
				}
				if (num == 0)
				{
					write(1, "0", 1);
					count++;
				}
				else
				{
					while (num > 0)
					{
						char digit = '0' + num % 10;
						write(1, &digit, 1);
						count++;
						num /= 10;
					}
				}
			}
			format++;
		}
	}
	va_end(args);
	return (count);
}
