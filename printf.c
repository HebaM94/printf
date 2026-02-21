#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
*_printf - function that produces output according to a format
*Return: the number of characters printed (excluding the null byte used to end output to strings)
*@format: a character string. 
*/
int _printf(const char *format, ...)
{
char ch;
int i = 0, count = 0;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] != '%')
{
ch = format[i];
write(1, &ch, 1);
count++;
i++;
}
else
{
count += handler(format[i+1], args);
i+= 2;
}
}
va_end(args);
return (count);
}
