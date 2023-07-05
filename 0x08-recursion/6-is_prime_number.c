#include "main.h"
/**
 * is_prime_number - desc
 * @n: par
 * Return: one or zero
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_checker(n, 2));
}
/**
 * is_prime_checker - desc
 * @n: par
 * @div: par
 * Return: one or zero
 */
int is_prime_checker(int n, int div)
{
	if (div == n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}
