#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of abs
 */
int _abs(int abs)
{
	return (abs * ((abs > 0) - (abs < 0)));
}
