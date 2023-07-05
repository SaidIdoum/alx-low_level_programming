#include "main.h"
/**
 * _sqrt_recursion - desc
 * @n: par
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int guess, result;

	guess = (n / 2) + 1;
	result = _sqrt_guess(n, guess);
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	return (result);
}
/**
 * _sqrt_guess - desc
 * @n: par
 * @guess: guess
 * Return: int
 */
int _sqrt_guess(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_guess(n, guess + 1));
	}
}
