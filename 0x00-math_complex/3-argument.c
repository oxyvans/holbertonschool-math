#include "holberton.h"

/**
 * argument - number
 * @c: input
 * Return: doble
 */

double argument(complex c)
{
	return (atan(c.im / c.re));
}
