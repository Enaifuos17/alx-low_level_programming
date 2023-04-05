#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 *
 * @n: number
 * @otherNum: int
 *
 * Return: 1 if its prime, 0 if its not
 */
int check_prime(int n, int otherNum);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if the number is prime
 *
 * @n: number
 * @otherNum: int
 * @otherNum: int
 *
 * Return: 1 if its prime, 0 if its not
 */
int check_prime(int n, int otherNum)
{
	if (otherNum >= n && n > 1)
	{
		return (1);
	}
	else if (n % otherNum == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, otherNum + 1));
	}
}
