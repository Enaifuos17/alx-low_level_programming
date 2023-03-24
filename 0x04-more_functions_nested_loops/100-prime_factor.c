#include <stdio.h>

/**
 * _sqrt - get the square of a number
 *
 * @x: number
 *
 * Return: 0
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}

	return (sqrt);
}

/**
 * largest_prime_factor - get the largest prime factor
 *
 * @num: number
 *
 * Return: 0
 */

void largest_prime_factor(long long num)
{
	int primeNum, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (primeNum = 3; primeNum <= _sqrt(num); primeNum += 2)
	{
		while (num % primeNum == 0)
		{
			num = num / primeNum;
			largest = primeNum;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
