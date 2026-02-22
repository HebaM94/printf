#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
*print_binary - function that convert unsigned int to binary and print it
* Return: the number of characters printed
* @args: unsigned int number
*/
int print_binary(va_list args)
{
    unsigned long int num = va_arg(args, unsigned int);
    int count = 0, n, i=0;
    char buf[64], digit;
    while (num > 0)
    {
        n=num;
        num = num/2;
        buf[i++] = (n % 2) + '0';  // Convert number to a character
    }
    while (i > 0)
    {
        digit = buf[--i];
        write(1, &digit, 1);
        count++;
    }

return (count);
}
