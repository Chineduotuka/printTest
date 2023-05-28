#include "main.h"
// #include <stdint.h>

int _printf(const char *format, ...)
{
    int printed_chars_count;

    if(format == NULL) {return (-1);}

    va_list args;

    va_start(args, format);

    printed_chars_count = my_parser(format, args);
    va_end(args);

    return(printed_chars_count);
}