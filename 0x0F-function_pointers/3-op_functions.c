#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first int
 * @b: the second int
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first int
 * @b: second int
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division fo two integers
 * @a: first int
 * @b: second int
 * Return: result of the division of @a by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: first int
 * @b: second int
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
