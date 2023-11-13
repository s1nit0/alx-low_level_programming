#include <stdio.h>

/**
* add - Function to add two integers
* @a: The first integer
* @b: The second integer
* Return: The sum of a and b
*/
int add(int a, int b)
{
	return (a + b);
}


/**
* sub - Function to subtract two integers
* @a: The first integer
* @b: The second integer
* Return: The result of subtracting b from a
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function to multiply two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
* div - Function to divide two integers
* @a: The numerator
* @b: The denominator
* Return: The result of dividing a by b
*/
int div(int a, int b)
{
	if (b != 0)
	{
	return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

/**
* mod - Function to calculate the remainder of division
* @a: The dividend
* @b: The divisor
* Return: The remainder of the division of a by b
*/
int mod(int a, int b)
{
	if (b != 0)
	{
	return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
}
