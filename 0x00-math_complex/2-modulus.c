#include "holberton.h"

/**
 * modulus - number
 * @c: input
 * Return: doble
 */

double modulus(complex c)
{
	return (sqrt((c.re * c.re) + (c.im * c.im)));
}
