#ifndef PRINTF_H
#define PRINTF_H

/**
* struct specifier - specifer struct
* @specif: specifer character
* @func: function pointer to the corresponding function
* Description: this struct used to handle the specifiers in the _printf function
*/
typedef struct specifier
{
char specif;
int (*func)(va_list);
} spec;

int _printf(const char *format, ...);
int handler(char character, va_list args);
int _strlen(char *s);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);

#endif

