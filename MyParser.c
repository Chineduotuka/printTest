#include "main.h"


int my_parser(const char *format, va_list args)
{
    type_checker check_type_list[] = {
        {"c", char_printer},
        {"s", string_printer},
        {"%", percent_printer},
        {"d", number_printer},
        {"i", number_printer},
        {"b", printf_bin},
        {"X", printf_hex_upper},
        {"x", printf_hex_lower},
        {NULL, NULL}
    }; 

    int i = 0;
    int j = 0;
    int char_count = 0;
    int method_return_count;

    if(format[0] == '%' && format[1] == '\0') {return (-1);}

    while(format[i] != '\0')
    {
        if(check_type_list[j].id == NULL) {return (-1);}
        
        if(format[i] == '%')
        {
            while(check_type_list[j].id != NULL)
            {
                if(format[ i + 1] == check_type_list[j].id[0])
                {
                    method_return_count = check_type_list[j].f(args);
                    if(method_return_count == -1)
                    {
                        return (-1);
                    }
                    else
                    {
                        char_count += method_return_count;
                        i = i + 2;
                        break;
                    }
                }
                j++;
            }
        }
        else
        {
            _putchar(format[i]);
            char_count++;
            i++;

        }
    }

    return (char_count);
}