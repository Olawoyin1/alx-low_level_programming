#include "main.h"

/**
 * _islower - this is the function to check for lowecase
 * @c : parameter to be checked
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
