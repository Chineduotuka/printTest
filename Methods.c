#include "main.h"
#include <unistd.h>


int number_printer(va_list args)
{
	int modulu_checker = 1;
	int count = 0;
	int num_copy;

	int num  = va_arg(args, int);

	if (num < 0)
	{
		count += _putchar('-');
		num_copy = num * -1;
	}
	else
    {
        num_copy = num;
    }

    while ((num_copy / modulu_checker) > 9)
    {
        modulu_checker *= 10;
    }

    while (modulu_checker != 0)
    {
		count += _putchar('0' + num_copy / modulu_checker);
		num_copy %= modulu_checker;
		modulu_checker /= 10; 
    }
	return (count);
}

int print_unsgined_number(unsigned int num)
{
	int modulu_checker = 1;
	int count = 0;
	int num_copy;

	num_copy = num;

    while ((num_copy/modulu_checker) > 9)
    {
       modulu_checker *= 10;
    };

    while (modulu_checker != 0)
    {
       count += _putchar('0' +( num_copy / modulu_checker));
		num_copy %= modulu_checker;
		modulu_checker /= 10;
    }

	return (count);
}

int char_printer(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);
	return (1);
}

int string_printer(va_list args)
{
	int count = 0;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL) {s = "(null)";}

    while(s[count] != '\0')
    {
        _putchar(s[count]);
        count++;
    }
		
	return (count);
}

int percent_printer(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}