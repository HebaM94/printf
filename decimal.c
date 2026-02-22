#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
*print_decimal - function that prints a decimal number
* Return: the number of characters printed
* @args: a decimal number
*/
int print_decimal(va_list args)
{
    long int num = va_arg(args, int);
    int count = 0, n=1;
    char digit;
    if (num == 0)
    {
        write(1, "0", 1);
        return (count + 1);
    }
    if (num < 0)
    {
        write(1, "-", 1);
        count++;
        num = -num;
    }
    while (num/n >= 10)
    {
        n *= 10;
    }
    while (n > 0)
    {
        digit = (num / n) + '0';  // Convert number to a character
        write(1, &digit, 1);
        count++;
        num %= n;
        n /= 10;
    } 
return (count);
}
