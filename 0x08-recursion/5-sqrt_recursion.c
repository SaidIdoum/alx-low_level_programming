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
		return (_sqrt_guess(n, 0, n));
	}
}
/**
 * _sqrt_guess - desc
 * @start: par
 * @finish: guess
 * @n: par
 * Return: int
 */
int _sqrt_guess(int n, int start, int finish)
{
	int mid;

	if (start <= finish)
	{
		mid = (start + finish) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			return (_sqrt_guess(n, mid + 1, finish));
		}
		return (_sqrt_guess(n, start, mid - 1));
	}
	return (-1);
}
