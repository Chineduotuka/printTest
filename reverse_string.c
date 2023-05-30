#include "main.h"


int print_rev_string(va_list val)
{
    char *input_string = va_arg(val, char *);
    int input_string_len = 0;
    int counter;

    while(input_string[input_string_len] != '\0')
    {
        input_string_len++;
    }

    counter = input_string_len - 1;
    while (counter >= 0)
    {
        _putchar(input_string[counter]);
        counter--;
    }

    return counter;
    
}