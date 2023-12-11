#include <stdio.h>

/**
 * add - Function to add two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of the two integers
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - Function to subtract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - Function to multiply two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of the two integers
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - Function to divide two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of the division
 */
int div(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Error: Division by zero\n");
        return (0);
    }
    return (a / b);
}

/**
 * mod - Function to find the remainder of the division
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of the division
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Error: Modulo by zero\n");
        return (0);
    }
    return (a % b);
}
