#include "main.h"


int printf_ro13(va_list val)
{
    char *input_string = va_arg(val, char*);
    char input_string_mapper[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13_output[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
    int i = 0;
    int j;
    int found = 0;
    int count = 0;

    if(input_string == NULL)
    {
        input_string = "(NULL)\n";
        _printf(input_string);
        return (-1);
    }   

    while(input_string[i] != '\0')
    {
        j = 0;
        found = 0;
        while(j <= 52 )
        {
            if(input_string[i] == input_string_mapper[j])
            {
                _putchar(rot13_output[j]);
                found = 1;
                i++;
                break;
                count++;
            }
            j++;
        }

        if(!found)
        {
            _putchar(input_string[i]);
            i++;
            found = 0;
            count++;
        }
    }

    return (count);
}