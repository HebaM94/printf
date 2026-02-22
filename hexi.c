#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
*print_unsigned - function that print unsigned int
* Return: the number of characters printed
* @args: int number
*/
int print_unsigned(va_list args)
{
    long int num = va_arg(args, unsigned int);
    unsigned count = 0, n=1;
    char digit;
    if (num == 0)
    {
        write(1, "0", 1);
        return (1);
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

/**
*print_octal- function that convert unsigned int in octal number system
* Return: the number of characters printed
* @args: int number
*/
int print_octal(va_list args)
{
unsigned long int num = va_arg(args, unsigned int);
    int count = 0, i=0;
    char buf[64], digit;
    if (num == 0)
{
    write(1, "0", 1);
    return (1);
}
    while (num > 0 && i < 64)
    {
        buf[i++] = (num % 8) + '0';  // Convert number to a character
        num = num/8;
    }
    while (i > 0)
    {
        digit = buf[--i];
        write(1, &digit, 1);
        count++;
    }

return (count);
}

/**
*print_hex - function that print unsigned int in lowercase hexadecimal number system
* Return: the number of characters printed
* @args: int number
*/
int print_hexilower(va_list args)
{
    unsigned long int num = va_arg(args, unsigned int);
    char *hex = "0123456789abcdef";
    unsigned int count = 0, i=0;
    char buf[64];
     if (num == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    while (num > 0)
    {
        buf[i++] = hex[num % 16];
        num /= 16;
    }

    while (i > 0)
    {
        write(1, &buf[--i], 1);
        count++;
    }

return (count);
}

/**
*print_hex - function that print unsigned int in uppercase hexadecimal number system
* Return: the number of characters printed
* @args: int number
*/
int print_hexiupper(va_list args)
{
unsigned long int num = va_arg(args, unsigned int);
    char *hex = "0123456789ABCDEF";
    unsigned int count = 0, i=0;
    char buf[64];
     if (num == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    while (num > 0)
    {
        buf[i++] = hex[num % 16];
        num /= 16;
    }

    while (i > 0)
    {
        write(1, &buf[--i], 1);
        count++;
    }

return (count);
}
