#include "holberton.h"

/**
 * is_prime_number - Returns 1 if input integer is prime number.
 * @n: Number to evaluate.
 * Return: 1 if n is prime number, else 0.
 */

int prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}

