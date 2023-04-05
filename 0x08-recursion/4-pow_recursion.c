#include "main.h"
/**
 * _pow_recursion - prints x to the power of y
 * @x: parameter
 * @y: parameter
 * Return: 0 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
