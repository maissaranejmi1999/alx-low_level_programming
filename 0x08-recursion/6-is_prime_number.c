#include "main.h"

/**
 * is_prime_number - function
 * @n: num
 * Return: int
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;  // 0 and 1 are not prime numbers.

	if (n - 1 <= 1)
		return 1;  // n is only divisible by 1 and itself, so it's prime.

	if (n % (n - 1) == 0)
		return 0;  // n is divisible by a number other than 1 and itself, so it's not prime.

	return is_prime_number(n - 1);
}
