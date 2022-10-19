#include "main.h"

/**
 * int _islower - function that checks for lowercase character
return: 1 if the char is lowercase, otherwise 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
