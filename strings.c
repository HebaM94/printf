#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h" 

/**
* _strlen - function that prints a character
* Return: the number of characters printed
* @args: a character string.
*/
int _strlen(char *s){
    int i = 0;
    if (s == NULL)
    return (i);
    while (s[i] != '\0'){
        i++;
    }
    return i;
}

/**
* print_char - function that prints a character
* Return: the number of characters printed
* @args: a character string.
*/
int print_char(va_list args){
    char c = va_arg(args, int);
    write(1, &c, 1);
    return 1;
}

/**
* print_string - function that prints a string
* Return: the number of characters printed
* @args: a character string.
*/
int print_string(va_list args){
    char *s = va_arg(args, char *);
    int len = _strlen(s);
    write(1, s, len);
    return len;
}

/**
* print_percent - function that prints a percent sign
* Return: the number of characters printed
* @args: a character string.
*/
int print_percent(va_list args){
    (void)args;
    write(1, "%", 1);
    return 1;
}
