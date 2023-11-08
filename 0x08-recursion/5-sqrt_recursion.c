#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: num
 * @start: num
 * @end: num
 * Return: int
*/

int _sqrt_recursion(int n, int start, int end)
{
	int mid;

	if (n < 0)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	if (mid * mid < n)
	{
		if (mid == start)
			return (mid);
		return (_sqrt_recursion(n, mid, end));
	}
	return (_sqrt_recursion(n, start, mid));
}

/**
 * sqrt_recursion - function
 * @n: num
 * Return: int
*/

int sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 0, n));
}
