#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
*handler - function that handle format string and call the corresponding function
*Return: the number of characters printed (excluding the null byte used to end output to strings)
*@character: a character string. 
*@args: va_list of arguments
*/
int handler(char character, va_list args)
{
    int i, count = 0;
    spec specifiers[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'\0', NULL}
    };
    if (character == '\0')
        return (-1);
    for (i = 0; specifiers[i].specif != '\0'; i++)
    {
        if (specifiers[i].specif == character)
            count += specifiers[i].func(args);
    }
return (count);
}
