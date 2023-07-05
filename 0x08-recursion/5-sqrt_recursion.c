#include "main.h"
int _sqrt_guess(int n, int guess);
/**
 * _sqrt_recursion - desc
 * @n: par
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int guess, result;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		guess = (n / 2) + 1;
		result = _sqrt_guess(n, guess);
		return (result);
	}
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
		return (_sqrt_guess(n, guess -1));
	}
	else
	{
		return (_sqrt_guess(n, guess + 1));
	}
}
