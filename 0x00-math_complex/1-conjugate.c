#include "holberton.h"

/**
 * conjugate - complex number cunjugate
 *  @c: input
 *  Return: c
 */

complex conjugate(complex c)
{
	c.im = c.im * (-1);
	return (c);
}
