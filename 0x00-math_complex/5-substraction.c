#include "holberton.h"

/**
 * substraction - substraction.
 * @c1: complex to add.
 * @c2: complex to add.
 * @c3: res
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
