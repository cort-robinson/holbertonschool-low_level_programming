#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct print
{
	char *op;
	void (*f)(va_list);
} op_t;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *seperator, const unsigned int n, ...);

void print_strings(const char *seperator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
