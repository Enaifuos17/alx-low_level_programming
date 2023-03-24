#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int num, largest, primeNum;

	num = 612852475143;

	/* divide by the smallest prime number which is 2 */
	while (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}
	/* divide by the next prime number possible 3 (5 7 9...) */
	for (primeNum = 3; primeNum <= sqrt(num); primeNum += 2)
	{
		while (num % primeNum == 0)
		{
			largest = primeNum;
			num = num / primeNum;
		}
	}
	if (num > 2)
		largest = num;
	printf("%ld\n", largest);
	return (0);
}
