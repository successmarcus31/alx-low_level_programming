#include "main.h"

/**
 * _islower function - checks if an input
 * character is lower or not
 *
 * Return - 1 if true and 0 if false
 *
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);

	else
		return (0);
}
