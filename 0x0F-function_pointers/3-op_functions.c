#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns sum
 * @a:num1
 * @b:num2
 * Return:sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns substractiom
 * @a:num1
 * @b:num2
 * Return:sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - returns multiplication
 * @a: num1
 * @b:num2
 * Return: multiply
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mul - returns division
 * @a:num1
 * @b:num2
 * Return: division
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - returns modulus
 * @a:nu1
 * @b:num2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
